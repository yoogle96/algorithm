#include <bits/stdc++.h>
using namespace std;
int n, num, ans;
int main() {
    cin >> n;
    while(n--) {
        cin >> num;
        if(num <= 1) continue;
        bool flag = false;
        for(int i = 2; i <= (num / 2); i++) {
            if(num % i == 0) {
                flag = true; 
                break;
            }
        }
        if(!flag) ans++;
    }
    cout << ans << endl;
}