#include <iostream>
#include <queue>
using namespace std;

queue< pair<int, int> > q;
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int N, map[21][21], cnt;
int main() {
    cin >> N;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            cin >> map[i][j];
        }
    }

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            if(map[i][j] == 1) {
                q.push(make_pair(i, j));
                map[i][j] = 0;
                while(!q.empty()) {
                    pair<int , int> temp = q.front();
                    q.pop();
                    for(int k = 0; k < 8; k++) {
                        int xx = temp.first + dx[k];
                        int yy = temp.second + dy[k];
                        if(map[xx][yy] == 1) {
                            q.push(make_pair(xx, yy));
                            map[xx][yy] = 0;
                        }
                    }
                }
                cnt++;
            }
        }
    }

    cout << cnt;
}