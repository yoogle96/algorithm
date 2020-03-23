#include <iostream>
using namespace std;

int N, M, a, b, unf[1001];

int Find(int v) {
    if(v == unf[v]) return v;
    else return unf[v] = Find(unf[v]);
}

void Union(int a, int b) {
    a = Find(a);
    b = Find(b);
    if(a!=b) unf[a] = b;
}

int main() {
    cin >> N >> M;
    for(int i = 1; i <= N; i++) unf[i] = i;
    for(int i = 0; i < M; i++) {
        cin >> a >> b;
        Union(a, b);
    }
    cin >> a >> b;
    a = Find(a);
    b = Find(b);
    if(a==b) cout << "YES";
    else cout << "NO";
}