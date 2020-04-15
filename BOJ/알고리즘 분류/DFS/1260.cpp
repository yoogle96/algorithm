#include <bits/stdc++.h>
using namespace std;
int n, m, v, arr[1001][1001], ch1[1001], ch2[1001];
int main() {
    cin >> n >> m >> v;
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        arr[a][b]++;
        arr[b][a]++;
    }

    int cur = v;
    vector<int> vdfs;   
    vdfs.push_back(cur);
    ch1[cur] = 1;
    stack<int> s;
    s.push(cur);
    while(!s.empty()) {
        cur = s.top();
        bool flag = false;
        for(int j = 1; j <= n; j++) {
            if(!ch1[j] && arr[cur][j]) {
                cur = j;
                vdfs.push_back(cur);
                s.push(cur);
                ch1[j] = 1;
                flag = true;
                break;
            }
        }
        if(!flag && !s.empty()) {
            s.pop();
        }
    }
    vector<int> vbfs;
    cur = v;
    vbfs.push_back(cur);
    ch2[cur] = 1;
    queue<int> q;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(!ch2[j] && arr[cur][j]) {
                q.push(j);
                vbfs.push_back(j);
                ch2[j] = 1;
            }
        }
        if(!q.empty()) {
            cur = q.front();
            q.pop();
        }
    }

    for(auto t : vdfs) cout << t << " ";
    cout << "\n";
    for(auto t : vbfs) cout << t << " ";
    cout << "\n";
}