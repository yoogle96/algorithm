#include <bits/stdc++.h>
using namespace std;
int dp[51], n;
int main() {
    dp[1] = 2;
    dp[2] = 3;
    cin >> n;
    for(int i = 3; i <= n; i++) dp[i] = dp[i-2] + dp[i-1];

    cout << dp[n] << endl;
}