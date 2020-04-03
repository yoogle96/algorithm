#include <bits/stdc++.h>
using namespace std;
int ans;
map<string, int> m1;
map<int, string> m2;
queue<string> q;
int solution(int n, vector<string> v) {
    for(int i = 0; i < v.size(); i++) transform(v[i].begin(), v[i].end(), v[i].begin(), ::toupper);
    for(auto t : v) {
        if(n == 0){
            ans+=5;
            continue;
        }
        if(m1.count(t) > 0) {
            ans++;
            m1[t]++;
        }
        else {
            if(m1.size() == n) {
                int mn = 987654321;
                string mnS;
                for(auto mt : m1) {
                    cout << mt.first << ", " << mt.second << endl;
                    if(mn > mt.second) {
                        mn = mt.second;
                        mnS = mt.first;
                    }
                }
                cout << endl;
                cout << "------------------" << endl;
                m1.erase(m1.find(mnS));
                m1[t]++;
                ans += 5;
            }else {
                m1[t]++;
                ans += 5;
            }
        }
    }
    
    return ans;
}

// #include <bits/stdc++.h>
// using namespace std;
// int ans;
// set<string> s;
// queue<string> q;
// int solution(int n, vector<string> v) {
//     for(int i = 0; i < v.size(); i++) transform(v[i].begin(), v[i].end(), v[i].begin(), ::toupper);
//     for(auto t : v) {
//         cout << s.size() << endl;
//         cout << q.size() << endl;
//         if(n == 0){
//             ans+=5;
//             continue;
//         } 
//         if(s.count(t) > 0) ans++;
//         else {
//             if(s.size() == n) {
//                 s.erase(s.find(q.front()));
//                 s.insert(t);
//                 q.pop();
//                 q.push(t);
//                 ans += 5;
//             }else {
//                 s.insert(t);
//                 q.push(t);
//                 ans += 5;
//             }
//         }
//     }
    
//     return ans;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int ans;
// map<string, int> um;
// queue<string> q;
// int solution(int n, vector<string> v) {
//     for(int i = 0; i < v.size(); i++) {
//         transform(v[i].begin(), v[i].end(), v[i].begin(), ::tolower);
//     }
//     for(int i = 0; i < v.size() ;i++) {
//         if(um.size() >= n) break;
//         if(um.count(v[i]) == 0) {
//             q.push(v[i]);
//             um[v[i]]++;
//             ans += 5;
//         }else {
//             ans++;
//         }
//     }
    
//     for(int i = n; i < v.size(); i++) {
//         if(um.count(v[i]) != 0) {
//             ans++;
//         }else {
//             if(um.count(q.front()) != 0) {
//                 um.erase(um.find(q.front()));
//                 um[v[i]]++;
//                 q.push(v[i]);
//                 q.pop();
//             }
//             ans += 5;
//         }
//     }
//     return ans;
// }
int main() {
    cout << solution(3, {"Jeju", "Pangyo", "Seoul", "NewYork", "LA", "Jeju", "Pangyo", "Seoul", "NewYork", "LA"}) << endl;
}