#include<bits/stdc++.h>
using namespace std;
int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
vector<vector<int>> MAP;
vector<int> solution(int m, int n, vector<vector<int>> MAP) {
    int area = 0;
    int areaMax = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(MAP[i][j] != 0) {
                queue<pair<pair<int, int>, int>> q;
                q.push(make_pair(make_pair(i, j), MAP[i][j]));
                MAP[i][j] = 0;
                int cnt = 1;
                while(!q.empty()) {
                    int x = q.front().first.first;
                    int y = q.front().first.second;
                    int val = q.front().second;
                    q.pop();
                    
                    for(int i = 0; i < 4; i++) {
                        int xx = x + dx[i];
                        int yy = y + dy[i];
                        if(xx <= -1 || yy <= -1 || xx >= m || yy >= n) continue;
                        if(MAP[xx][yy] == val) {
                            cnt++;
                            q.push(make_pair(make_pair(xx, yy), val));
                            MAP[xx][yy] = 0;
                        }
                    }
                }
                area++;
                areaMax = max(areaMax, cnt);
            }
        }
    }
    vector<int> answer(2);
    answer[0] = area;
    answer[1] = areaMax;
    return answer;
}