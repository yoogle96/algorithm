#include <bits/stdc++.h>
using namespace std;
int n, m, arr[101], a, b, ans;
int Find(int a) {
    if(arr[a] == a) return a;
    else return arr[a] = Find(arr[a]);
}
void Union(int a, int b) {
    int x = Find(a);
    int y = Find(b);
    if(x != y) {
        arr[y] = x;
    }
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) arr[i] = i;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        Union(a, b);
    }

    for(int i = 2; i <= n; i++) {
        int aa = Find(1);
        int bb = Find(i);
        if(aa == bb) ans++;
    }
    cout << ans << endl;
}