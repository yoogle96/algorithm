#include <bits/stdc++.h>
using namespace std;

int n, ans = 987654321, v[21][21];
bool ch[21];

void dfs(int cur, int cnt) {
    if(cnt == n / 2) {
        int start = 0;
        int link = 0;
        vector<int> teamStart;
        vector<int> teamLink;
        for(int i = 1; i <= n; i++) {
            if(!ch[i]) teamStart.push_back(i);
            else teamLink.push_back(i);
        }
        for(int i = 0; i < teamStart.size(); i++) {
            for(int j = i + 1; j < teamStart.size(); j++) {
                start += v[teamStart[i]][teamStart[j]] + v[teamStart[j]][teamStart[i]];
                link += v[teamLink[i]][teamLink[j]] + v[teamLink[j]][teamLink[i]];
            }
        }
        ans = min(ans, abs(start - link));
        return;
    }
    for(int i = cur + 1; i <= n; i++) {
        ch[i] = true;
        dfs(i, cnt + 1);
        ch[i] = false;
    }
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> v[i][j];
        }
    }   
    dfs(0, 0);
    cout << ans << endl;
}