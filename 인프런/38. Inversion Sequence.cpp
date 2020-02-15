#include <iostream>
#include <vector>
using namespace std;
int N, input, idx;
int main() {
    cin >> N;
    vector<int> v(N);
    for(int i = 1; i <= N; i++) {
        cin >> input;
        idx = 0;
        for(int j = 0; j < N; j++) {
            if(v[j] == 0) idx++;
            if(idx > input) {
                if(v[j] != 0) continue;
                v[j] = i;
                break;
            }
        }
    }
    for(int i = 0; i < N; i++) {
        cout << v[i] << " ";
    }
}