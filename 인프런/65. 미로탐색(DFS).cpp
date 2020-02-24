#include <iostream>
#include <vector>
using namespace std;
int N, cnt, ch[9][9];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
vector< vector<int> > arr(9, vector<int>(9, 1));
void DFS(int row, int col) {
    if(row == 7 && col == 7) {
        cnt++;
    }else {
        /* 인프런 풀이 풀이(정답) */
        int xx, yy;
        for(int i = 0; i < 4; i++) {
            xx = row + dx[i];
            yy = col + dy[i];
            if(xx < 1 || xx > 7 || yy < 1 || yy > 7) continue;
            if(arr[xx][yy] == 0 && ch[xx][yy] == 0) {
                ch[xx][yy] = 1;
                DFS(xx, yy);
                ch[xx][yy] = 0;
            }
        }

        /* yoogle 풀이(정답) */
        // if(arr[row][col] != 0) return;
        // if(ch[row - 1][col] == 0) {
        //     // 상
        //     ch[row][col] = 1;
        //     DFS(row - 1, col);
        //     ch[row][col] = 0;
        // }
        // if(ch[row + 1][col] == 0) {
        //     // 하
        //     ch[row][col] = 1;
        //     DFS(row + 1, col);
        //     ch[row][col] = 0;
        // }
        // if(ch[row][col - 1] == 0) {
        //     // 좌
        //     ch[row][col] = 1;
        //     DFS(row, col - 1);
        //     ch[row][col] = 0;
        // }
        // if(ch[row][col + 1] == 0) {
        //     // 우
        //     ch[row][col] = 1;
        //     DFS(row, col + 1);
        //     ch[row][col] = 0;
        // }
    }
}

int main() {
    for(int i = 1; i <= 7; i++) {
        for(int j = 1; j <= 7; j++) {
            cin >> arr[i][j];
        }
    }
    ch[1][1] = 1;
    DFS(1, 1);
    cout << cnt;
}