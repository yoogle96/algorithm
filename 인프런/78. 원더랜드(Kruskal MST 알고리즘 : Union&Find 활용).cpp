#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int V, E, A, B, C, unf[1001], answer;

class Edge {
    public:
        int v1;
        int v2;
        int val;
        Edge(int a, int b, int c) {
            v1 = a;
            v2 = b;
            val = c;
        }
};

bool cmp(Edge ed1, Edge ed2) {
    return ed1.val < ed2.val;
}

int Find(int v) {
    if(v == unf[v]) return v;
    else return unf[v] = Find(unf[v]);
}

void Union(int a, int b) {
    a = Find(a);
    b = Find(b);
    if(a != b) unf[a] = b;
}

int main() {
    vector<Edge> ed;
    cin >> V >> E;
    for(int i = 1; i <= V; i++) {
        unf[i] = i;
    }
    for(int i = 0; i < E; i++) {
        cin >> A >> B >> C;
        ed.push_back(Edge(A, B, C));
    }
    sort(ed.begin(), ed.end(), cmp);
    for(int i = 0; i < ed.size(); i++) {
        A = Find(ed[i].v1);
        B = Find(ed[i].v2);
        if(A != B) {
            answer += ed[i].val;
            Union(A, B);
        }
        // cout << ed[i].v1 << " " << ed[i].v2 << " " << ed[i].val << endl;
    }
    cout << answer;
}