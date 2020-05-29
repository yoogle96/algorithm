#include <bits/stdc++.h>
using namespace std;
int ans, MAP[100001][4];
int solution(vector<vector<int> > v)
{
    int len = v.size();
    for(int i = 0; i < 4; i++) MAP[0][i] = v[0][i];
    for(int i = 1; i < len; i++) {
        for(int j = 0; j < 4; j++) {
            for(int k = 0; k < 4; k++) {
                if(j == k) continue;
                MAP[i][j] = max(MAP[i][j], MAP[i-1][k] + v[i][j]);
            }
        }
    }
    for(auto t : MAP[len-1]) ans = max(ans, t);
    return ans;
}