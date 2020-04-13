#include <iostream>
#include <vector>
using namespace std;
int map[10][10];
bool col[9][10], row[9][10], square[9][10];
void dfs(int cnt) {
    if(cnt == 81) {
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                cout << map[i][j] << " ";
            }
            cout << endl;
        }
        exit(0);
    }

    int x = cnt / 9;
    int y = cnt % 9;

    if(map[x][y]) {
        dfs(cnt + 1);
    }else {
        for(int i = 1; i <= 9; i++) {
            if(!row[x][i] && !col[y][i] && !square[(x / 3) * 3 + (y / 3)][i]) {
                map[x][y] = i;
                square[(x / 3) * 3 + (y / 3)][i] = true;
                row[x][i] = true;
                col[y][i] = true;
                dfs(cnt + 1);
                map[x][y] = 0;
                square[(x / 3) * 3 + (y / 3)][i] = false;
                row[x][i] = false;
                col[y][i] = false;
            }
        }
    }
}

int main() {
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cin >> map[i][j];
            if(map[i][j]) {
                row[i][map[i][j]] = true;
                col[j][map[i][j]] = true;
                square[(i / 3) * 3 + (j / 3)][map[i][j]] = true;
            }
        }
    }
    cout << endl;
    dfs(0);
}