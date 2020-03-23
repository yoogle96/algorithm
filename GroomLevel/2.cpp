#include <bits/stdc++.h>
using namespace std;
int n, m, sum;
int main() {
    cin >> n >> m;
    vector<int> v;
    for(int i = n; i <= m; i++) {
        if((int)sqrt(i) * (int)sqrt(i) == i) {
            v.push_back(i);
            sum += i;
        }
    }
    cout << v[0] << " " << sum << "\n";
}