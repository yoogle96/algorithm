#include <bits/stdc++.h>
using namespace std;

int n, mx, ch[100001];
vector<int> v[501], temp;
string token;
vector<int> solution(string s) {
    vector<int> answer;
    int n = s.size();
    for(int i = 2; i < n - 1; i++) {
        if(s[i] == '{') continue;
        else if(s[i] == '}') {
            temp.push_back(stoi(token));
            v[temp.size()] = temp;
            int tSize = temp.size();
            mx = max(mx, tSize);
            temp.clear();
            token.clear();
        }
        else if(s[i] == ',') {
            if(token != "") {
                temp.push_back(stoi(token));
                token.clear();
            }
        }else {
            token += s[i];
        }
    }
    
    for(int i = 1; i <= mx; i++) {
        for(auto t : v[i]) {
            if(!ch[t]) {
                answer.push_back(t);
                ch[t] = 1;
            }
        }
    }
    
    return answer;
}