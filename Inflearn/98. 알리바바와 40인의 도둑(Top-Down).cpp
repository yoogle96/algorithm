#include <bits/stdc++.h>
using namespace std;
int arr[21][21], dp[21][21], n;

int dfs(int x, int y) {
    if(x == 1 && y == 1) return dp[x][y] = arr[x][y];
    if(dp[x][y] > 0) return dp[x][y];
    if(x == 1) {
        return dp[x][y] = dfs(x, y-1) + arr[x][y];
    }else if(y == 1) {
        return dp[x][y] = dfs(x-1, y) + arr[x][y];
    }else {
        return dp[x][y] = min(dfs(x,y-1), dfs(x-1,y)) + arr[x][y];
    }
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }
    dfs(n, n);
    cout << dp[n][n] << endl;
}