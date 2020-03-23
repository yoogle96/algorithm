#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a;
    long long ans;
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a; v.push_back(a);
    }
    sort(v.begin(), v.end());
    if(n % 2 == 0) ans = v[n / 2] * v[n / 2 - 1];
    else ans = v[n / 2] * v[n / 2];
    cout << ans << endl;
}
