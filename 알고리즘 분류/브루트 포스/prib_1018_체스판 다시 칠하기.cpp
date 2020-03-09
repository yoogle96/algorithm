#include <bits/stdc++.h>
using namespace std;
int n, m, minn = 2147000000;
int main() {
    cin >> n >> m;
    bool b = true, w = true;
    string s[50];

    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for(int k = 0; k <= n - 8; k++) {
        for(int q = 0; q <= m - 8; q++) {
            int bCnt = 0, wCnt = 0;
            for(int i = k; i < k + 8; i++) {
                for(int j = q; j < q + 8; j++) {
                    if(s[i][j] == 'W') {
                        // 블랙이어야 할때
                        if(!w) {
                            wCnt++;
                            w = true;
                        }else w = false;

                        if(b) {
                            bCnt++;
                            b = false;
                        }else b = true;
                    }else {
                        if(!b) {
                            bCnt++;
                            b = true;
                        }else b = false;

                        if(w) {
                            wCnt++;
                            w = false;
                        }else w = true;
                    }
                }
                b = !b; w = !w;
            }
            minn = min( {minn, bCnt, wCnt} );
        }
    }
    cout << minn << endl;
}
