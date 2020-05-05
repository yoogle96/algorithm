#include <bits/stdc++.h>
using namespace std;
int ans = 2147000000;
int solution(string s) {
    int sz = s.size();
    if(sz == 1) return 1;
    for(int i = 1; i <= (sz / 2); i++) {
        string cur = s.substr(0, i);
        string res = "";
        int cnt = 1;
        for(int j = i; j < sz; j += i) {
            string token = s.substr(j, i);
            if(cur == token) {
                cnt++;
            }else {
                if(cnt == 1) {
                    res += cur;
                }else {
                    res += to_string(cnt);
                    res += cur;
                }
                cur = token;
                cnt = 1;
            }
        }
        if(cnt == 1) {
            res += cur;
        }else {
            res += to_string(cnt);
            res += cur;
        }
        int resSz = res.size();
        ans = min(ans, resSz);
    }
    return ans;
}