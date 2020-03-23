#include <iostream>
#include <queue>
using namespace std;
int S, E, x,pos, ch[10001], d[3] = {1, -1, 5};
int main() {
    cin >> S >> E;
    queue<int> q;
    ch[S] = 1;
    q.push(S);
    while(!q.empty()) {
        x = q.front();
        q.pop();
        for(int i = 0; i < 3; i++) {
            pos = x + d[i];
            if(pos < 1 && pos > 10000) continue;
            if(pos == E) {
                cout << ch[x];
                return 0;
            }
            if(ch[pos] == 0) {
                ch[pos] = ch[x] + 1;
                q.push(pos);
            }
        }
    }

}