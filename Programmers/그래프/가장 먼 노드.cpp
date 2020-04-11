#include <bits/stdc++.h>
using namespace std;
int ans, m[20001][20001], dis[20001], ch[20001];
queue<int> q;
int solution(int n, vector<vector<int>> edge) {
    for(auto t : edge) {
        m[t[0]][t[1]] = 1;
        m[t[1]][t[0]] = 1;
    }
    q.push(1);
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        if(ch[x]) continue;
        ch[x] = 1;
        for(int i = 1; i <= n; i++) {
            if(m[x][i] && !ch[i]) {
                if(dis[i] > 0) {
                    dis[i] = min(dis[i], dis[x] + 1);
                }else {
                    dis[i] = dis[x] + 1;
                }
                q.push(i);
            }
        }
    }
    vector<int> v;
    for(int i = 1; i <= n; i++) {
        v.push_back(dis[i]);
    }
    sort(v.begin(), v.end(), greater<int>());
    int mx = v[0];
    ans++;
    for(int i = 1; i < v.size(); i++) {
        if(mx == v[i]) ans++;
        else break;
    }
    
    return ans;
}