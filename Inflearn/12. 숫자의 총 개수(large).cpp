#include <iostream>
using namespace std;
int N;
int main() {
    cin >> N;
    int n, sum = 0, c = 1, d = 9, res = 0;
    while(sum + d < N) {
        res = res+(c*d);
        sum = sum + d;
        c++;
        d *= 10;
    }
    res += (N-sum) * c;
    cout << res;
}