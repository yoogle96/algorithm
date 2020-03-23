#include <iostream>
#include <vector>
using namespace std;
int N, K, p, cnt, total;
int main() {
    cin >> N;
    vector<int> v(N);

    for(int i = 0; i < N; i++) {
        cin >> v[i];
        total += v[i];
    }
    cin >> K;
    if(total <= K) {
        cout << -1;
        return 0;
    }

    while(1) {
        p++;
        if(p > N) p = 0;
        if(v[p] == 0) continue;
        v[p]--;
        cnt++;
        if(cnt == K) break;
    }

    while(1) {
        if(p > N) p = 0;
        if(v[p] != 0) break;
        p++;
    }
    cout << p + 1;
}