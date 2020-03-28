#include <bits/stdc++.h>
using namespace std;
int n, m, arr[1000001];

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n >> m;
    arr[1] = 1;
    for(int i = 2; i <= sqrt(m); i++) {
        if(arr[i] == 0) {
            for(int j = (i + i); j <= m; (j += i)) {
                if(j > m) break;
                arr[j] = 1;
            }
        }
    }

    for(int i = n; i <= m; i++) {
        if(arr[i] == 0) {
            cout << i << "\n";
        }
    }
       
}