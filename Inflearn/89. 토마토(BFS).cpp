#include <iostream>
#include <queue>
using namespace std;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
int M, N, maxx = -2147000000;
int map[1001][1001], dis[1001][1001];
queue< pair<int, int> > q;
int main() {
    cin >> M >> N;
    for(int i = 1 ; i <= N; i++) {
        for(int j = 1; j <= M; j++) {
            cin >> map[i][j];
            if(map[i][j] == 1) {
                q.push(make_pair(i, j));
            }
        }
    }
    while(!q.empty()) {
        pair<int, int> temp = q.front();
        q.pop();
        for(int i = 0 ; i < 4; i++) {
            int xx = temp.first + dx[i];
            int yy = temp.second + dy[i];
            if(map[xx][yy] == 0 && xx >= 1 && yy >= 1 && xx <= N && yy <= M) {
                q.push(make_pair(xx, yy));
                map[xx][yy] = 1;
                dis[xx][yy] = dis[temp.first][temp.second] + 1;  
            }
        }
    }

    bool flag = true;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= M; j++) {
            if(map[i][j] == 0) {
                flag = false;
                break;
            }
        }
    }

    if(flag) {
        for(int i = 1; i <= N; i++) {
           for(int j = 1; j <= M; j++) {
                if(maxx < dis[i][j]) maxx = dis[i][j];
            }
        }
        cout << maxx;
    }else {
        cout << -1;
    }
}