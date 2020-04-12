#include <bits/stdc++.h>
using namespace std;
int arr[21][21], dp[21][21], n;
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i - 1 == 0) {
                dp[i][j] = dp[i][j-1] + arr[i][j];
            }else if(j - 1 == 0) {
                dp[i][j] = dp[i-1][j] + arr[i][j];
            }else {
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + arr[i][j];
            }
        }
    }

    cout << dp[n][n] << endl;
}