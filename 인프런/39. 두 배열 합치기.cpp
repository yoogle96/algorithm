#include <iostream>
using namespace std;
int a[101], b[101], answer[300], N, M, pA, pB;
int main() {
    cin >> N;
    for(int i = 0; i < N; i++) cin >> a[i];
    cin >> M;
    for(int i = 0; i < M; i++) cin >> b[i];

    for(int i = 0; i < (N + M); i++) {
        if(pA == N) {
            answer[i] = b[pB++];
            continue;
        }
        if(pB == M) {
            answer[i] = a[pA++];
            continue;
        }
        if(a[pA] < b[pB]) {
            answer[i] = a[pA++];
        }else {
            answer[i] = b[pB++];
        }
    }
    
    for(int i = 0; i < N + M; i++) {
        cout << answer[i] << " ";
    }
}