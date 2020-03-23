#include <iostream>
#include <vector>
using namespace std;
int dist[101], N, M, a, b, c, s, e;
class Edge {
    public:
        int s;
        int e;
        int val;
        Edge(int a, int b, int c) {
            s = a;
            e = b;
            val = c;
        }
};

int main() {
    vector<Edge> Ed;
    cin >> N >> M;
    for(int i = 1; i <= M; i++) {
        cin >> a >> b >> c;
        Ed.push_back(Edge(a, b, c));
    }
    for(int i = 1; i <= N; i++) {
        dist[i] = 2147000000;
    }
    cin >> s >> e;
    dist[s] = 0;
    for(int i = 1; i < N; i++) {
        for(int j = 0; j < Ed.size(); j++) {
            int u = Ed[j].s;
            int v = Ed[j].e;
            int w = Ed[j].val;
            if(dist[u] != 2147000000 && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }
    // 음의 싸이클 검사
    for(int j = 0; j < Ed.size(); j++) {
        int u = Ed[j].s;
        int v = Ed[j].e;
        int w = Ed[j].val;
        if(dist[u] != 2147000000 && dist[u] + w < dist[v]) {
            cout << -1;
            return 0;
        }
    }
    cout << dist[e];
}