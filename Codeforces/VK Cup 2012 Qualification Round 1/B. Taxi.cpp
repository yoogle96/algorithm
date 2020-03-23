#include <bits/stdc++.h>
using namespace std;
int c[5], n, a, ans;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a;
        c[a]++;
    }
    ans += c[4];
    ans += c[3];
    c[1] -= c[3];
    ans += c[2] / 2;
    c[2] = c[2] % 2;
    // c[1] -= c[2] / 2;
    if(c[2] > 0) {
        ans += c[2];
        c[1] -= 2;
        c[2] = 0;
    }
    if(c[1] > 0) {
        if(c[1] <= 4) {
            ans++;
        }else {
            ans += (c[1] / 4);
            if(c[1] % 4 != 0) ans++;
        }
    }
    cout << ans;
}














// #include <bits/stdc++.h>
// using namespace std;
// int n, total, a, ans, ch[100001];
// int main() {
//     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//     cin >> n;
//     vector<int> v(n);
//     for(int i = 0; i < n; i++) {
//         cin >> v[i];
//     }
//     sort(v.begin(), v.end(), greater<int>());
//     for(int i = 0; i < n; i++) {
//         int cnt = 4 - v[i];
//         if(ch[i] != 0) continue;
//         if(cnt == 0) {
//             ans++;
//             continue;
//         }
//         bool flag = false;
//         for(int j = i + 1; j < n; j++) {
//             if(ch[j] == 0 && v[j] <= cnt) {
//                 cnt -= v[j];
//                 ch[j] = 1;
//             }
//             if(cnt == 0) {
//                 flag = true;
//                 ans++;
//                 break;
//             }
//         }
//         if(ch[i] == 0 && !flag) ans++;
//     }
//     cout << ans << endl;
// }