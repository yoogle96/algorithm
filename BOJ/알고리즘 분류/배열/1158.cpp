#include <bits/stdc++.h>
using namespace std;
int n, m, cnt;
int main() {
    cin >> n >> m;
    vector<int> v(n);
    vector<int> ans;
    
    for(int i = 1; i <= n; i++) v[i-1] = i;
    vector<int>::iterator cur = v.begin();
    
    while(cnt < n) {
        for(int i = 1; i < m; i++) {
            cur++;
            if(cur == v.end()) cur = v.begin();
        }
        ans.push_back(*cur);
        v.erase(cur);
        if(cur == v.end()) cur = v.begin();
        cnt++;
    }

    cout << "<";
    for(int i = 0; i < n - 1; i++) {
        cout << ans[i] << ", ";
    }
    cout << ans[n-1] << ">" << "\n";
}