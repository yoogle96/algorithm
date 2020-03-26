/* 인덱스를 연산하여 제거하는 방식으로 가장 빠름 */
#include <bits/stdc++.h>
using namespace std;
int n, m, cnt, tmp;
int main() {
    cin >> n >> m;
    vector<int> v(n);
    vector<int> ans;
    
    for(int i = 1; i <= n; i++) v[i-1] = i;
    while(!v.empty()) {
        tmp = (tmp+m-1) % v.size();
        ans.push_back(*(v.begin() + tmp));
        v.erase((v.begin() + tmp));
    }

    cout << "<";
    for(int i = 0; i < n - 1; i++) {
        cout << ans[i] << ", ";
    }
    cout << ans[n-1] << ">" << "\n";
}

/* iterator 이용하여 제거할 인덱스 탐색 후 제거 */
// #include <bits/stdc++.h>
// using namespace std;
// int n, m, cnt;
// int main() {
//     cin >> n >> m;
//     vector<int> v(n);
//     vector<int> ans;
    
//     for(int i = 1; i <= n; i++) v[i-1] = i;
//     vector<int>::iterator cur = v.begin();
    
//     while(cnt < n) {
//         for(int i = 1; i < m; i++) {
//             cur++;
//             if(cur == v.end()) cur = v.begin();
//         }
//         ans.push_back(*cur);
//         v.erase(cur);
//         if(cur == v.end()) cur = v.begin();
//         cnt++;
//     }

//     cout << "<";
//     for(int i = 0; i < n - 1; i++) {
//         cout << ans[i] << ", ";
//     }
//     cout << ans[n-1] << ">" << "\n";
// }

/* dequeue를 이용한 방법 */
// #include <bits/stdc++.h>
// using namespace std;
// int n, m, cnt, tmp;
// int main() {
//     cin >> n >> m;
//     deque<int> dq;
//     vector<int> ans;

//     for(int i = 1; i <= n; i++) dq.push_back(i);

//     while(!dq.empty()) {
//         for(int i = 1; i < m; i++) {
//             dq.push_back(dq.front());
//             dq.pop_front();
//         }
//         ans.push_back(dq.front());
//         dq.pop_front();
//     }

//     cout << "<";
//     for(int i = 0; i < n - 1; i++) {
//         cout << ans[i] << ", ";
//     }
//     cout << ans[n-1] << ">" << "\n";
// }