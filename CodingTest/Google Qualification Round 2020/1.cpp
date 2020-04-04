#include <bits/stdc++.h>
using namespace std;
int t, n;
int main() {
    cin >> t;
    for(int a = 1; a <= t; a++) {
        cin >> n;
        vector< vector<int> > v(n + 1, vector<int>(n + 1));
        int k = 0, r = 0, c = 0;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                cin >> v[i][j];
            }
        }
        
        for(int i = 1; i <= n; i++) {
            k += v[i][i];
            vector<int> rCh(n + 1), tCh(n + 1);
            for(int j = 1; j <= n; j++) {
                rCh[v[i][j]]++;
                tCh[v[j][i]]++;
            }
            for(int j = 1; j <= n; j++) {
                if(rCh[j] >= 2) {
                    r++;
                    break;
                }
            }
            for(int j = 1; j <= n; j++) {
                if(tCh[j] >= 2) {
                    c++;
                    break;
                }
            }
        }
        cout << "Case #" << a << ": " << k << " " << r << " " << c << "\n";
    }
}