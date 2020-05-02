#include <bits/stdc++.h>
using namespace std;
int m, n, h, MAP[101][101][101], CH[101][101][101], ans;
int dx[6] = {0, 1, 0, -1, 0, 0}, dy[6] = {-1, 0, 1, 0, 0, 0}, dz[6] = {0, 0, 0, 0, -1, 1};
// 왼쪽, 아래, 오른쪽, 위, 뒤, 앞

bool check() {
    for(int i = 1; i <= h; i++) {
        for(int j = 1; j <= n; j++) {
            for(int k = 1; k <= m; k++) {
                if(MAP[i][j][k] == 0) {
                    return false;
                }
            }
        }
    }
    return true;
}

int main() {
    queue<pair<pair<int, int>, pair<int, int>>> q;
    cin >> m >> n >> h;
    for(int i = 1; i <= h; i++) {
        for(int j = 1; j <= n; j++) {
            for(int k = 1; k <= m; k++) {
                cin >> MAP[i][j][k];
                if(MAP[i][j][k] == 1) {
                    q.push(make_pair(make_pair(j, k), make_pair(i, 0)));
                }
            }
        }
    }

    while(!q.empty()) {
        int xx = q.front().first.first;
        int yy = q.front().first.second;
        int zz = q.front().second.first;
        int cur = q.front().second.second;
        ans = cur;
        q.pop();
        for(int i = 0; i < 6; i++) {
            int cx = xx + dx[i];
            int cy = yy + dy[i];
            int cz = zz + dz[i];
            if(cx <= 0 || cy <= 0 || cz <= 0 || cx > n || cy > m || cz > h) continue;
            if(MAP[cz][cx][cy] == 0) {
                MAP[cz][cx][cy] = 1;
                q.push(make_pair(make_pair(cx, cy), make_pair(cz, cur + 1)));
            }
        }
    }

    bool flag = check();
    if(!flag) ans = -1;
    

    cout << ans << endl;
}