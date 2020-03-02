#include <iostream>
#include <queue>
using namespace std;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
int map[10][10], dis[10][10];
queue< pair<int, int> > q;
int main() {
    for(int i = 1; i <= 7; i++) {
        for(int j = 1; j <= 7 ;j++) {
            cin >> map[i][j];
        }
    }
    q.push(make_pair(1, 1));
    map[1][1] = 1;
    while(!q.empty()) {
        pair<int, int> temp = q.front();
        q.pop();
        for(int i = 0; i < 4; i++) {
            int xx = temp.first + dx[i];
            int yy = temp.second + dy[i];
            if(map[xx][yy] == 0 && xx >= 1 && yy >= 1 && xx <= 7 && yy <= 7) {
                q.push(make_pair(xx, yy));
                map[xx][yy] = 1;
                dis[xx][yy] = dis[temp.first][temp.second] + 1;
            }
        }
    }
    
    cout << dis[7][7];
}