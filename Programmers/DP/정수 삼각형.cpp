#include <bits/stdc++.h>
using namespace std;
int ans, dp[502][502];
int solution(vector<vector<int>> triangle) {
    int len = triangle.size();
    dp[0][0] = triangle[0][0];
    for(int i = 1; i < len; i++) {
        dp[i][0] = triangle[i][0] + dp[i - 1][0];
        for(int j = 1; j < triangle[i].size(); j++) {
            dp[i][j] = max(triangle[i][j] + dp[i - 1][j - 1], triangle[i][j] + dp[i - 1][j]);
        }
    }
    for(int i = 0; i < len; i++) ans = max(ans, dp[len - 1][i]);
    return ans;
}