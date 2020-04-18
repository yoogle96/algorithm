#include <bits/stdc++.h>
using namespace std;
int n, k, cnt, ch[100001];
queue<int> q;
int main() {
    cin >> n >> k;
    q.push(n); ch[n] = 1;
    while(!q.empty()) {
        int cur = q.front(); q.pop();
        if(cur == k) {
            cout << (ch[cur] - 1) << "\n";
            return 0;
        }

        if(cur - 1 >= 0 && !ch[cur - 1]) {
            ch[cur - 1] = ch[cur] + 1;
            q.push(cur - 1);
        }

        if(cur + 1 <= 100000 && !ch[cur + 1]) {
            ch[cur + 1] = ch[cur] + 1;
            q.push(cur + 1);
        }

        if(cur * 2 <= 100000 && !ch[cur * 2]) {
            ch[cur * 2] = ch[cur] + 1;
            q.push(cur * 2);
        }
    }
}