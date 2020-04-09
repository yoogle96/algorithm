#include <bits/stdc++.h>
using namespace std;
vector<string> ans, tmp;
vector<vector<string>> v;
int ch[100001];
bool dfs(string start, int cnt) {
    tmp.push_back(start);
    if(cnt == v.size()) {
        ans = tmp;
        return true;
    }
    
    for(int i = 0; i < v.size(); i++) {
        if(!ch[i] && start == v[i][0]) {
            ch[i] = 1;
            bool flag = dfs(v[i][1], cnt + 1);
            if(flag) return true;
            ch[i] = 0;
        }
    }
    tmp.pop_back();
    return false;
}

vector<string> solution(vector<vector<string>> tickets) {
    v = tickets;
    string start = "ICN";
    sort(v.begin(), v.end());
    dfs(start, 0);
    return ans;
}

// #include <bits/stdc++.h>
// using namespace std;
// vector<string> ans;
// map<string, set<string>> m;
// vector<string> solution(vector<vector<string>> tickets) {
//     for(auto t : tickets) {
//         m[t[0]].insert(t[1]);
//     }
//     string start = "ICN";
//     for(int i = 0; i < tickets.size(); i++) {
//         ans.push_back(start);
//         if(m[start].size() > 0) {
//             string tmp = *m[start].begin();
//             m[start].erase(m[start].begin());
//             start = tmp;
//         }
//     }
//     ans.push_back(start);

//     for(auto t : ans) {
//         cout << t << ", ";
//     }
//     return ans;
// }

int main() {
    solution({{"ICN", "SFO"}, {"ICN", "ATL"}, {"SFO", "ATL"}, {"ICN", "BTL"},{"ATL", "ICN"}, {"ATL", "SFO"}, {"BTL", "SFO"}, {"SFO", "ICN"}});
}