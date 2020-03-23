#include <bits/stdc++.h>
using namespace std;
int n, k, ans, a;
int main() {
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for(int i = 0; i < n; i++) {
        if(v[k - 1] <= v[i] && v[i] > 0) ans++;
    }
    cout << ans;
}