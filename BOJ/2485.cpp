#include <bits/stdc++.h>
using namespace std;
int n, ans;
int gcd(int a, int b)
{
	return b ? gcd(b, a%b) : a;
}
int main() {
    cin >> n;
    vector<int> v(n + 1), v2(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i = 1; i < n; i++) {
        v2[i] = v[i+1] - v[i];
    }
    int mn = 2147000000;
    for(int i = 1; i < n - 1; i++) {
        mn = min(mn, gcd(v2[i], v2[i+1]));
    }

    for(int i = 1; i < n; i++) {
        if(v2[i] > mn) {
            ans += (v2[i] / mn) - 1;
        }
    }
    cout << ans << endl;
}