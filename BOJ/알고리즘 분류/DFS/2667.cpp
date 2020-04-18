#include <bits/stdc++.h>
using namespace std;
int n, arr[26][26], cnt;
vector<int> ans;
string s;

void dfs(int x, int y) {
    if(arr[x][y] == 0 || x == 0 || y == 0 || x > n || y > n) {
        return;
    }
    arr[x][y] = 0;
    cnt++;
    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> s;
        for(int j = 0; j < n; j++) {
            arr[i][j + 1] = s[j] - '0';
        }
    }

    for(int i = 1; i <=n; i++) {
        for(int j = 1; j <=n ;j++) {
            if(arr[i][j] == 1) {
                dfs(i, j);
                ans.push_back(cnt);
                cnt = 0;
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for(auto t : ans) {
        cout << t << "\n";
    }
}