#include <iostream>
using namespace std;
int N, A[101], OP[5], maxx = -2147000000, minn = 2147000000;

void DFS(int L, int res) {
    if(L == N) {
        if(maxx < res) maxx = res;
        if(minn > res) minn = res;
    }else {
        if(OP[0] > 0) {
            OP[0]--;
            DFS(L + 1, res + A[L]);
            OP[0]++;
        }
        if(OP[1] > 0) {
            OP[1]--;
            DFS(L + 1, res - A[L]);
            OP[1]++;
        }
        if(OP[2] > 0) {
            OP[2]--;
            DFS(L + 1, res * A[L]);
            OP[2]++;
        }
        if(OP[3] > 0) {
            OP[3]--;
            DFS(L + 1, res / A[L]);
            OP[3]++;
        }
    }
}

int main() {
    cin >> N;
    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < 4; i++) cin >> OP[i];
    DFS(1, A[0]);
    cout << maxx << endl;
    cout << minn << endl;
}