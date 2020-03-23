#include <iostream>
#include <vector>
using namespace std;
int N, M, col, row, weight;
int main() {
    cin >> N >> M;
    vector< vector<int> > v(N + 1, vector<int>(N + 1));
    for(int i = 1; i <= M; i++) {
        cin >> col >> row >> weight;  
        v[col][row] = weight;
    }
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}