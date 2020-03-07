#include <bits/stdc++.h>
using namespace std;
int n, k;
int main() {
    cin >> n >> k;
    for(int i = 0; i < k; i++) {
        if(n == 0) {
            break;
        }
        if(n >= 10 && n % ((n /10) * 10) == 0) n /= 10;
        else n--;
    }
    cout << n;
}


