#include <bits/stdc++.h>
using namespace std;
int n, dp[1001];
int main() {
    cin >> n;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            dp[i] = max(dp[i], dp[i - j] + v[j]);
        }
    }
    cout << dp[n];
}