#include <iostream>
using namespace std;
int N, card, output;
int DP[1001];
int main() {
    cin >> N;
    for(int i = 1; i <= 1000; i++) {
        DP[i] = DP[i-1] + i;
    }

    while(N--) {
        cin >> card >> output;
        if(DP[card] != output) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}