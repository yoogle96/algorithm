#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    cin >> n;
    bool flag = true;
    int temp = 0;
    for(int i = 0; ; i++) {
        temp = (7 * i + 1) + (4 * i);
        if(temp == n) {
            n = 0;
            break;
        }
        if(temp > n) break;
    }
    if(n % 4 == 0 || n % 7 == 0) {
        n = 0;
    }
    while(n) {
        int digit = n % 10;
        n /= 10;
        if(!(digit == 4 || digit == 7)) {
            flag = false; 
            break;
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}