#include <bits/stdc++.h>
#define INF 2000000000001
using namespace std;
int t;
long long arr[INF];
int main() {
    arr[1] = 1;
    for(long long i = 2; i <= sqrt(INF); i++) {
        if(!arr[i]) {
            for(long long j = i + i; j <= INF; j+=i) {
                arr[j] = 1;
            }
        }
    }
    cout << arr[100] << endl;

    // cin >> t;
    // while(t--) {
    //     int a, b;
    //     cin >> a >> b;
        
    // }
}