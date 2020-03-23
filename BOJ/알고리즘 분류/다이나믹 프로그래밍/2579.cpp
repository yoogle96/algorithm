//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int n, dp[100001][100001];
int main() {
    cin >> n;
    vector< vector<int> > v((n * 2), vector<int>(n + 1, 0));
    int idx = 1;
    for(int i = 1; i <= (n * 2) - 1; i++) {
        for(int j = 1; j <= idx; j++) {
            cin >> v[i][j];
        }
        if(i >= n) idx--;
        else idx++;
    }
    
    dp[1][1] = v[1][1];
    idx = 2;
    for(int i = 2; i <= (n * 2) - 1; i++) {
        for(int j = 1; j <= idx; j++) {
            if(i > n) {
                dp[i][j] = v[i][j] + max(dp[i - 1][j], dp[i - 1][j + 1]);
            }else {
                dp[i][j] = v[i][j] + max(dp[i - 1][j], dp[i - 1][j - 1]);
            }
        }
        if(i >= n) idx--;
        else idx++;
    }
    
    cout << dp[n * 2 - 1][1] << endl;
    return 0;
}
