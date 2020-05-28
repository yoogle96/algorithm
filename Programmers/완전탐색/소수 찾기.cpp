#include <bits/stdc++.h>
#define INF 10000000 
using namespace std;
int ans, arr[10000000], sz;
bool ch[10];
set<int> mySet;
string S;
void dfs(int cnt, string tmp) {
    if(cnt == S.size()) {
        return;
    }
    
    for(int i = 0; i < S.size(); i++) {
        if(!ch[i]) {
            ch[i] = true;
            tmp += S[i];
            int iTmp = stoi(tmp);
            if(!arr[iTmp]) mySet.insert(iTmp);
            dfs(cnt + 1, tmp);
            tmp.pop_back();
            ch[i] = false;
        }
    }
}

int solution(string s) {
    sz = s.size();
    S = s;
    arr[1] = 1;
    for(int i = 2; i < sqrt(INF); i++) {
        if(!arr[i]) {
            for(int j = i + i; j <= INF; j = j + i) {
                arr[j] = 1;
            }
        }
    }
    dfs(0, "");
    if(mySet.count(0)) mySet.erase(mySet.find(0));
    ans = mySet.size();
    return ans;
}