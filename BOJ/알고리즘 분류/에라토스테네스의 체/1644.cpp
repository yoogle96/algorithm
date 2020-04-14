#include <bits/stdc++.h>
using namespace std;
int n, arr[4000001], ans;
int main() {
    cin >> n;
    if(n == 1) {
        cout << 0 << "\n";
        return 0;
    }
    for(int i = 2; i <= 4000000; i++) {
        if(arr[i] == 0) {
            for(int j = (i + i); j <= 4000000; (j += i)) {
                arr[j] = 1;
            }
        }
    }

    vector<int> v;
    for(int i = 2; i <= n; i++) {
        if(arr[i] == 0) {
            v.push_back(i);
        }
    }

    int a = 0, b = 0;
    for(int i = 0; i < v.size() - 1; i++) {
        a = i; b = i + 1;
        if(v[i] + v[i + 1] > n) {
            break;
        }
    }
    a--; b--;
    int total = v[a] + v[b];
    while(a < b) {
        if(total == n) {
            total -= v[b];
            b--;
            a--;
            total += v[a];
            ans++;
            continue;
        }
        if(a <= 0 || b <= 0) break;
        if(total < n) {
            a--;
            total += v[a];
        }else {
            total -= v[b];
            b--;
        }
    }
    arr[n] == 0 ? ans++ : ans;
    cout << ans << "\n";
}