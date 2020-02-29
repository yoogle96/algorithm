#include <iostream>
using namespace std;
int N, M, dy[21][21];

int DFS(int n, int m) {
    if(m == 0 || n == m) return 1;
    else {
        if(dy[n][m] != 0) {
            return dy[n][m];
        }else {
            return dy[n][m] = DFS(n-1, m-1) + DFS(n-1, m);
        }
    }
}

int main() {
    cin >> N >> M;
    cout << DFS(N, M);
}