#include <iostream>
using namespace std;
int N, M, input, cnt, mem;
int main() {
    cin >> N >> M;
    while(N--) {
        cin >> input;
        if(input > M) cnt++;
        else {
            if(mem < cnt) mem = cnt;
            cnt = 0;
        }
    }
    if(mem < cnt) mem = cnt;
    if(mem == 0) cout << -1;
    else cout << mem;
}