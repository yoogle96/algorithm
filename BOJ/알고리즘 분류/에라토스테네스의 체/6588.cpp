#include <bits/stdc++.h>
using namespace std;
#define INF 1000001
int n, arr[INF + 1];
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    arr[1] = 1;
    for(int i = 2; i <= sqrt(INF); i++) {
        if(!arr[i]) {
            for(int j = i + i; j <= INF; j+=i) {
                arr[j] = 1;
            }
        }
    }

    while(1) {
        cin >> n;
        if(!n) break;
        bool flag = false;
        int a, b;
        for(a = 3; n / 2; a += 2) {
            b = n - a;
            if(arr[a] || arr[b]) continue;
            else {
                flag = true;
                break;
            }
        }
        if(flag) {
            cout << n << " = " << a << " + " << b << "\n";
        }else {
            cout << "Goldbach's conjecture is wrong." << "\n";
        }
    }
}