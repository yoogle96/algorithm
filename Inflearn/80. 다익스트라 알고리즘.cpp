#include <iostream>
#include <vector>
using namespace std;
int N, M, A, B, C, minn, ch[21];
vector< pair <int, int> > map[21];
vector<int> dist(21, 2147000000);
int main() {
    cin >> N >> M;
    for(int i = 0; i < M; i++) {
        cin >> A >> B >> C;
        map[A].push_back(make_pair(B, C));
    }
    dist[1] = 0;
    for(int i = 1; i <= N; i++) {
        minn = 0;
        for(int j = 1; j <= N; j++) {
            if(ch[j] == 0 && dist[j] < dist[minn]) minn = j;
            ch[minn] = 1;
            for(int k = 0; k < map[minn].size(); k++) {
                int v = map[minn][k].first;
                int cost = map[minn][k].second;
                if(dist[v] > dist[minn] + cost) {
                    dist[v] = dist[minn] + cost;
                }
            }
        }
    }

    for(int i = 2; i <= N; i++) {
        if(dist[i] != 2147000000) cout << i << " : " << dist[i] << endl;
        else cout << i << " : impossible" << endl;
    }
}