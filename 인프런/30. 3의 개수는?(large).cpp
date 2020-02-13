#include <iostream>
using namespace std;
int N, lt, rt, k, cur, res;
int main() {
    k = 1;
    cin >> N;
    lt = 1;
    while(lt != 0) {
        lt = N/(k * 10);
        rt = N % k;
        cur = (N/k) % 10;
        if(cur > 3) res += ((lt + 1) * k);
        else if(cur == 3) res += (lt * k) + (rt + 1);
        else res += (lt * k);
        k *= 10;
    }
    cout << res;
}