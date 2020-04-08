#include <bits/stdc++.h>
using namespace std;
#define INF 2147000000
int ans = INF, ch[51];
vector<string> v;
string b, t;

bool isImp(string s1, string s2) {
    int cnt = 0;
    for(int i = 0; i < s1.size(); i++) {
        if(s1[i] != s2[i]) cnt++;
        if(cnt > 1) return false;
    }
    return true;
}

void dfs(int cur, string curS) {
    if(curS == t) {
        ans = min(ans, cur);
        return;
    }
    
    for(int i = 0; i < v.size(); i++) {
        if(!ch[i] && isImp(curS, v[i])) {
            ch[i] = 1;
            dfs(cur + 1, v[i]);
            ch[i] = 0;
        }
    }
    
}

int solution(string begin, string target, vector<string> words) {
    v = words;
    t = target;
    b = begin;
    dfs(0, b);
    if(ans == INF) ans = 0;
    
    return ans;
}