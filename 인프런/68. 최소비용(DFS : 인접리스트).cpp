#include <iostream>
#include <vector>
using namespace std;
vector< pair<int, int> > map[30];
int N, M, a, b, weight, ch[30], minn = 2147000000;

void DFS(int v, int weight) {
    if(v == N) {
        if(minn > weight) minn = weight;
    }else {
        for(int i = 0; i < map[v].size(); i++) {
            if(ch[map[v][i].first] == 0) {
                ch[map[v][i].first] = 1;
                DFS(map[v][i].first, weight + map[v][i].second);
                ch[map[v][i].first] = 0;
            }
        }
    }
}

int main() {
    cin >> N >> M;
    for(int i = 0; i < M; i++) {
        cin >> a >> b >> weight;
        map[a].push_back(make_pair(b, weight));
    }
    ch[1] = 1;
    DFS(1, 0);
    cout << minn;
}