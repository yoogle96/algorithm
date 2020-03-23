#include <iostream>
using namespace std;
int N, M, a, b, weight, arr[21][21], ch[21], minn = 2147000000;

void DFS(int v, int weight) {
    if(v == N) {
        if(minn > weight) minn = weight;
    }else {
        for(int i = 1; i <= N; i++) {
            if(arr[v][i] != 0 && ch[i] == 0) {
                ch[i] = 1;
                DFS(i, weight + arr[v][i]);
                ch[i] = 0;
            }
        }
    }
}

int main() {
    cin >> N >> M;
    for(int i = 0 ; i < M; i++) {
        cin >> a >> b >> weight;
        arr[a][b] = weight;
    }
    ch[1] = 1;
    DFS(1, 0);
    cout << minn;
}