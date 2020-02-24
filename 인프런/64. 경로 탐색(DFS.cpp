#include <iostream>
using namespace std;

int arr[21][21], ch[21],N, M, row, col, cnt;
void DFS(int v) {
    if(v == N) {
        cnt++;
    }else {
        for(int i = 1; i <= N; i++) {
            if(arr[v][i] == 1 && ch[i] == 0) {
                ch[i] = 1;
                DFS(i);
                ch[i] = 0;
            }
        }
    }
}
int main() {
    cin >> N >> M;
    for(int i = 0; i < M; i++) {
        cin >> row >> col;
        arr[row][col] = 1;
    }
    ch[1] = 1;
    DFS(1);
    cout << cnt;
}