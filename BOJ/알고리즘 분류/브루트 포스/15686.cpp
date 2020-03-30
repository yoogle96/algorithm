#include <bits/stdc++.h>
using namespace std;
int myMap[51][51], n, m, ans = 987654321;
bool ch[51];
vector< pair<int,int> > home, store;

void dfs(int cur, int cnt) {
    if(cnt == m) {
        vector< pair<int, int> > select;
        for(int i = 0; i < store.size(); i++) {
            if(ch[i]) {
                select.push_back(make_pair(store[i].first, store[i].second));
            }
        }

        int totalDis = 0;
        for(auto h : home) {
            int dis = 987654321;
            for(auto s : select) {
                dis = min(dis, (abs(h.first - s.first) + abs(h.second - s.second)));
            }
            totalDis += dis;
        }
        ans = min(ans, totalDis);
    }
    for(int i = cur; i < store.size(); i++) {
        ch[i] = true;
        dfs(i + 1, cnt + 1);
        ch[i] = false;
    }
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <=n; j++) {
            cin >> myMap[i][j];
            if(myMap[i][j] == 1) home.push_back(make_pair(i, j));
            else if(myMap[i][j] == 2) store.push_back(make_pair(i, j));
        }
    }
    dfs(0, 0);
    cout << ans << endl;
}