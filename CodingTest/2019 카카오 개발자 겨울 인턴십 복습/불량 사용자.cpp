#include <bits/stdc++.h>
using namespace std;
int ans, ch[10];
set<string> s;
set<set<string>> s2;
vector<string> u_id, b_id;
bool isMatch(string s1, string s2) {
    if(s1.size() != s2.size()) return false;
    
    for(int i = 0; i < s1.size(); i++) {
        if(s2[i] == '*') {
            continue;
        }else {
            if(s1[i] != s2[i]) {
                return false;
            }
        }
    }
    return true;
}

void dfs(int cnt) {
    if(cnt == b_id.size()) {
        if(!s2.count(s)) {
            s2.insert(s);
            ans++;
        }
        return;
    }
    for(int i = 0; i < u_id.size(); i++) {
        if(isMatch(u_id[i], b_id[cnt]) && !ch[i]) {
            ch[i] = 1;
            s.insert(u_id[i]);
            dfs(cnt+1);
            s.erase(s.find(u_id[i]));
            ch[i] = 0;
        }
    }
    
}
int solution(vector<string> user_id, vector<string> banned_id) {
    u_id = user_id;
    b_id = banned_id;
    dfs(0);
    return ans;
}