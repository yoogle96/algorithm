#include <iostream>
#include <vector>
using namespace std;
int N, cnt;
int main() {
    cin >> N;
    vector< vector<int> > v(N+2, vector<int> (N+2, 0));
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            cin >> v[i][j];
        }
    }

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            bool flag = true;
            if(v[i][j-1] >= v[i][j] || v[i][j+1] >= v[i][j] || v[i-1][j] >= v[i][j] || v[i+1][j] >= v[i][j]) flag = false;
            if(flag) cnt++;
        }
    }
    cout << cnt;
}