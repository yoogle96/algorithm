#include <bits/stdc++.h>
using namespace std;
int ans;
string tkn;
stack<int> stk;
int solution(string s) {
    int n = s.size();
    for(int i = 0; i < n; i++) {
        if(isdigit(s[i])) {
            tkn += s[i];
        } else if(s[i] != '*' && s[i] != '#'){
            int num = stoi(tkn);
            tkn.clear();
            if(s[i] == 'S') {
                stk.push(num);
            }else if(s[i] == 'D') {
                num = pow(num, 2);
                stk.push(num);
            }else if(s[i] == 'T') {
                num = pow(num, 3);
                stk.push(num);
            }
        }else {
            if(s[i] == '*') {
                if(stk.size() <= 1) {
                    int tmp = stk.top(); stk.pop();
                    tmp *= 2;
                    stk.push(tmp);
                }else {
                    int tmp1 = stk.top(); stk.pop();
                    int tmp2 = stk.top(); stk.pop();
                    tmp1 *= 2;
                    tmp2 *= 2;
                    stk.push(tmp2);
                    stk.push(tmp1);
                }
            }else if(s[i] == '#') {
                int tmp = stk.top(); stk.pop();
                tmp *= -1;
                stk.push(tmp);
            }
        }
    }
   while(!stk.empty()) {
       ans += stk.top(); stk.pop();
   }
    
    return ans;
}