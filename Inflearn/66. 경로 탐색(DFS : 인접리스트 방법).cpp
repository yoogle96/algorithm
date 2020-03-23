#include <iostream>
#include <vector>
using namespace std;
vector<int> map[30];
int N, M, a, b, ch[30], cnt;

void DFS(int v) {
    cout << v << endl;
    if(v == N) cnt++;
    else {
        for(int i = 0; i < map[v].size(); i++) {
            if(ch[map[v][i]] == 0) {
                ch[map[v][i]] = 1;
                DFS(map[v][i]);
                ch[map[v][i]] = 0;
            }
        }
    } 
}

int main() {
    cin >> N >> M;
    for(int i = 0; i < M; i++) {
        cin >> a >> b;
        map[a].push_back(b);
    }
    ch[1] = 1;
    DFS(1);
    cout << cnt;
}