#include <iostream>
using namespace std;
int t, n, m, ans, temp;
int main() {
    cin >> t;
    while(t--) {
        cin >> n >> m;
        ans = 0;
        int ans = (m - n) + 1;
        temp = ans - 1;
        for(int i = 1; i < (m - n) + 1; i++) {
            // cout << temp << endl;
            ans += temp--;
        }
        cout << ans;
    }
    

}