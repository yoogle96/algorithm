#include <bits/stdc++.h>
using namespace std;
int n, s, ans, arr[21];

void dfs(int i, int sum) {
    if(i == n) {
        if(sum == s) ans++;
        return;
    }

    dfs(i + 1, sum + arr[i]);
    dfs(i + 1, sum);
}

int main() {
    cin >> n >> s;
    for(int i = 0; i < n; i++) cin >> arr[i];
    dfs(0, 0);
    if (s == 0) ans -= 1;
    cout << ans << endl;
}