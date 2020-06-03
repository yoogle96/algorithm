#include <bits/stdc++.h>
using namespace std;
int n, m, MAP[1001][1001], ch[1001][1001], dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1}, ans, t;
queue<pair<pair<int, int>, int>> q;
int main() {
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> MAP[i][j];
            if(MAP[i][j] == 1) {
                q.push(make_pair(make_pair(i, j), 0));
                ch[i][j] = 1;
            }else if(MAP[i][j] == 0) {
                t++;
            }
        }
    }
    while(!q.empty()) {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int cur = q.front().second;
        ans = cur;
        q.pop();
        for(int i = 0; i < 4; i++) {
            int xx = x + dx[i];
            int yy = y + dy[i];
            if(xx >= m || xx < 0 || yy >= n || yy < 0) continue;
            if(MAP[xx][yy] == 0 && ch[xx][yy] == 0) {
                t--;
                MAP[xx][yy] = 1;
                ch[xx][yy] = 1;
                q.push(make_pair(make_pair(xx, yy), cur + 1));
            }
        }
    }
    if(!t) cout << ans << endl;
    else cout << -1 << endl;
}