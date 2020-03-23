#include <iostream>
#include <algorithm>

using namespace std;

int DP[501][501];
int loc[501][501];
// 우, 좌, 하, 상
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int N;

int dfs(int x, int y){
    if(DP[x][y]){
        return DP[x][y];
    }

    DP[x][y] = 1;

    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(ny < 0 || ny >= N || nx < 0 || nx >= N)
            continue;

        if(loc[x][y] >= loc[nx][ny])
            continue;

        DP[x][y] = max(DP[x][y], dfs(nx, ny)+1);
    }

    return DP[x][y];
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> loc[i][j];
        }
    }

    int ans = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            ans = max(ans, dfs(i, j));
        }
    }

    cout << ans << endl;
}