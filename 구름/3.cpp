#include <bits/stdc++.h>
using namespace std;
int n, a;
int main() {
    cin >> n;
    vector<int> v(n + 1), dis(n + 1);
    v[0] = 0;
    int maxx = 0;
    for(int i = 1; i < n; i++) {
        cin >> v[i];
        dis[i - 1] = v[i] - v[i - 1];
        maxx = max(maxx, dis[i - 1]);
    }
    int i = maxx;
    for(; ; i++) {
        int temp = i;
        bool flag = false;
        for(int j = 0; j <= n; j++) {
            if(j == n) {
                flag = true;
                break;
            }
            if(temp >= dis[i]) {
                temp--;
            }else {
                break;
            }
        }
        if(flag) break;
    }

    cout << i << "\n";
}