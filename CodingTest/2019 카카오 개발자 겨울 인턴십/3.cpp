#include <bits/stdc++.h>
using namespace std;

int ans, n, m, ch[1000001];
vector<string> v[100], tempV, tempUser;
set<set<string> > mySet;

bool isMatch(string s1, string s2) {
    if(s1.size() != s2.size()) return false;
    bool flag = true;
    for(int i = 0; i < s1.size(); i++) {
        if(s1[i] != s2[i] && s2[i] != '*') return false;
    }
    return true;
}

void dfs(int cnt) { 
    if(cnt == m) {
        set<string> tempSet;
        for(auto t : tempV) {
            tempSet.insert(t);
        }
        if(mySet.count(tempSet) == 0) {
            ans++;
            mySet.insert(tempSet);
        }
    }
    int k = v[cnt].size();
    for(int j = 0; j < k; j++) {
        for(int i = 0; i < n; i++) {
            if(!ch[i] && v[cnt][j] == tempUser[i]) {
                ch[i] = true;
                tempV.push_back(tempUser[i]);
                dfs(cnt + 1);
                tempV.pop_back();
                ch[i] = false;
            }
        }
    }
}

int solution(vector<string> user_id, vector<string> banned_id) {
    n = user_id.size(), m = banned_id.size();
    tempUser = user_id;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(isMatch(user_id[i], banned_id[j])) {
                v[j].push_back(user_id[i]);
            }
        }
    }
    dfs(0);
    return ans;
}