#include <bits/stdc++.h>
using namespace std;
int n, MAP[17][17], ans, dx[3] = {0, 1, 1}, dy[3] = {1, 1, 0};
void dfs(int x, int y, int c) {
    if(x == n - 1 && y == n - 1) {
        ans++;
        return;
    }

    if(x >= n || x < 0 || y >= n|| y < 0) return;
    for(int i = 0; i < 3; i++) {
        if(c == 0) {
            if(i == 2) continue;
        }else if(c == 2) {
            if(i == 0) continue;
        }
        if(i == 1) {
            bool flag = true;
            for(int j = 0; j < 3; j++) {
                if(MAP[x + dx[j]][y + dy[j]]) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                dfs(x + dx[i], y + dy[i], i);
            }            
        }else {
            if(!MAP[x + dx[i]][y + dy[i]]) {
                dfs(x + dx[i], y + dy[i], i);
            }
        }
    }
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> MAP[i][j];
        }
    }
    dfs(0, 1, 0);
    cout << ans << "\n";
}