#include <bits/stdc++.h>
using namespace std;
int n, arr[20][20], col[20];
long long ans;
bool isGood(int q) {
    for(int i = 0; i < q; i++) {
        if(col[i] == col[q] || abs(col[q]- col[i]) == (q - i)) return false;
    }
    return true;
}

void dfs(int q) {
    if(q == n) {
        ans++;
        return;
    }
    for(int i = 0; i < n; i++) {
        col[q] = i;
        if(isGood(q)) {
            dfs(q + 1);
        }
    }
}
int main() {
    cin >> n;
    dfs(0);
    cout << ans << endl;
}