#include <bits/stdc++.h>
using namespace std;
int n, arr[1001], dp[1001], ans;
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> arr[i];
    dp[1] = 1;
    ans = -2147000000;
    for(int i =  2; i <= n; i++) {
        int maxx = 0;
        for(int j = i - 1; j >= 1; j--) {
            if(arr[i] > arr[j] && maxx < dp[j]) {
                maxx = dp[j];
            }
        }
        dp[i] = maxx + 1;
        if(dp[i] > ans) ans = dp[i];
    }
    cout << ans << endl;
}