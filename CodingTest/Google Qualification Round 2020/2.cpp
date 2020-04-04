#include <bits/stdc++.h>
using namespace std;
int t;
int main() {
    cin >> t;
    for(int c = 1; c <= t; c++) {
        string s;
        cin >> s;
        stack<char> stk;
        char fToken = s[0];
        int fTmpNum = s[0] - '0';
        for(int j = 0; j < fTmpNum; j++) {
            stk.push('(');
        }
        stk.push(s[0]);
        for(int j = 0; j < fTmpNum; j++) {
            stk.push(')');
        }

        int prv = fTmpNum;
        for(int i = 1; i < s.size(); i++) {
            char token = s[i];
            int tmpNum = s[i] - '0';
            if(tmpNum == 0) {
                stk.push(token);
                prv = tmpNum;
                continue;
            }
            if(prv == 0) {
                for(int j = 0; j < tmpNum; j++) {
                    stk.push('(');
                }
                stk.push(token);
                for(int j = 0; j < tmpNum; j++) {
                    stk.push(')');
                }
                prv = tmpNum;
                continue;
            }
            if(prv > tmpNum) {
                for(int j = 0; j < tmpNum; j++) {
                    stk.pop();
                }
                stk.push(token);
                for(int j = 0; j < tmpNum; j++) {
                    stk.push(')');
                }
            }else if(prv < tmpNum) {
                stk.pop();
                for(int j = 0; j < tmpNum - 1; j++) {
                    stk.push('(');
                }
                stk.push(token);
                for(int j = 0; j < tmpNum; j++) {
                    stk.push(')');
                }
            }else {
                for(int j = 0; j < tmpNum; j++) {
                    stk.pop();
                }
                stk.push(token);
                for(int j = 0; j < tmpNum; j++) {
                    stk.push(')');
                }
            }
            prv = tmpNum;
        }
        string ans;
        while(!stk.empty()) {
            ans += (stk.top());
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        cout << "Case #" << c << ": " << ans << "\n";
    }
    return 0;
}