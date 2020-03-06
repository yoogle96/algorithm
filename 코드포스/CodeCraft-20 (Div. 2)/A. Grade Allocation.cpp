#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int t, n, m, a;
int main() {
    cin >> t;
    while(t--) {
        cin >> n >> m;
        vector<int> st(n);
        for(int i = 0; i < n; i++) {
            cin >> st[i];
        }

        for(int i = 1; i < n; i++) {
            st[0] += st[i];
            if(st[0] > m) break;
        }
        int answer = st[0] > m ? m : st[0];
        cout << answer << endl;
    }
}