#include <bits/stdc++.h>
using namespace std;
int t, arr[10000], a, b;

void prime() {
    arr[1] = 1;
    for(int i = 2; i <= sqrt(10000); i++) {
        if(!arr[i]) {
            for(int j = i + i; j <= 10000; j+=i) {
                arr[j] = 1;
            }
        }
    }
}

int bfs() {
    vector<int> ch(10000, 0);
    queue<pair<int, int> > q;
    q.push({a, 0});
    ch[a] = 1;
    while(!q.empty()) {
        int cur = q.front().first;
        int cnt = q.front().second;
        string curStr = to_string(cur);
        q.pop();
        if (cur == b) {
            return cnt;
        }
        for (int i = 0; i < 4; i++) {
            string tmpStr = curStr;
            for (int j = 0; j < 10; j++) {
                tmpStr[i] = j + '0';
                int next = stoi(tmpStr);
                if (next >= 1000 && !arr[next] && !ch[next]) {
                    ch[next] = 1;
                    q.push({next, cnt + 1});
                }
            }
        }
    }
    return -1;
}

int main() {
    cin >> t;
    prime();
    while(t--) {
        cin >> a >> b;
        int cnt = bfs();
        if (cnt == -1) {
            cout << "Impossible" << "\n";
        }else {
            cout << cnt << "\n";
        }
    }
}