#include <bits/stdc++.h>
using namespace std;
int n, m, arr[1001][1001], ans;
int dx[4] = {1, 0, 0, -1}, dy[4] = {0, 1, -1, 0};
bool ch[1001][1001][2], success;
queue<pair<pair<int, int>, pair<int, int>>> q; // {x,y}, {벽돌, 카운트}
string s;

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> s;
        for(int j = 0; j < m; j++) {
            arr[i][j+1] = s[j] - '0';
        }
    }

    q.push(make_pair(make_pair(1, 1), make_pair(0, 1)));
    ch[1][1][0] = true;
    while(!q.empty()) {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int B = q.front().second.first;
        int cnt = q.front().second.second;
        q.pop();

        if(x == n && y == m) {
            ans = cnt;
            success = true;
            break;
        }
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 1 || ny < 1 || nx > n || ny > m) continue;

            if(arr[nx][ny] == 1 && B == 0) {
                ch[nx][ny][B+1] = true;
                q.push(make_pair(make_pair(nx, ny), make_pair(B + 1, cnt + 1)));
            }
            else if(arr[nx][ny] == 0 && ch[nx][ny][B] == false) {
                ch[nx][ny][B] = true;
                q.push(make_pair(make_pair(nx, ny), make_pair(B, cnt + 1)));
            }
        }
    }
    if(!success) ans = -1;
    cout << ans << endl;
}