#include <iostream>
#include <vector>
using namespace std;
int N, M, cnt;
int main() {
    cin >> N >> M;
    vector<int> v(N);
    for(int i = 0; i < N; i++) v[i] = i+1;
    int idx = 0;
    for(int i = 0; i < N - 1; i++) {
        cnt = 0;
        for(int j = 0; j < M; j++) {
            cnt++;
            if(cnt == M) {
                v.erase(v.begin() + idx);
            }else {
                idx++;
            }
            if(idx >= v.size()) idx = 0;
        }
    }
    cout << v[0];
}