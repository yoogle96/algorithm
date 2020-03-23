#include <iostream>
using namespace std;
int arr[11], N, M, cnt = 0;

void DFS(int L, int val) {
    if(L == N+1) {
        if(val == M) {
            cnt++;
        }
    }else {
        DFS(L+1, val + arr[L]);
        DFS(L+1, val - arr[L]);
        DFS(L+1, val);
    }

}

int main() {   
    cin >> N >> M;
    for(int i = 1; i <= N; i++) {
        cin >> arr[i];
    }
    DFS(1, 0);
    if(cnt == 0) cout << "-1";
    else cout << cnt;
}