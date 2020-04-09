#include <vector>
using namespace std;
int ans, dp[101][101], map[101][101];
int solution(int m, int n, vector<vector<int>> puddles) {
    for(auto t : puddles) map[t[1]][t[0]] = -1;
    dp[1][0] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(map[i][j] == -1) dp[i][j] = 0;
            else dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 1000000007;
        }
    }
    return dp[n][m];
}