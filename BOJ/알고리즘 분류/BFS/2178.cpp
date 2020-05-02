#include <bits/stdc++.h>
using namespace std;
int n, m, MAP[101][101], CH[101][101], ans;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
string s;
void bfs() {
    queue<pair< pair<int, int>, int> > q;
    q.push(make_pair(make_pair(1, 1), 1));
    while(!q.empty()) {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int cnt = q.front().second;
        q.pop();
        if(x == n && y == m) {
            ans = cnt;
            break;
        }
        for(int i = 0; i < 4; i++) {
            int xx = x + dx[i];
            int yy = y + dy[i];
            if(MAP[xx][yy] == 1 && !CH[xx][yy]) {
                CH[xx][yy] = true;
                q.push(make_pair(make_pair(xx, yy), cnt + 1));
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i = 1;i <= n; i++) {
        cin >> s;
        for(int j = 0; j < m; j++) {
            MAP[i][j + 1] = s[j] - '0';
        }
    }
    bfs();
    cout << ans << endl;
}