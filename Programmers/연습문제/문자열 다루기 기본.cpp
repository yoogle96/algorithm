#include <bits/stdc++.h>
using namespace std;
bool ans = true;
bool solution(string s) {
    int len = s.size();
    if(len == 4 || len == 6) {
        for(auto t : s) {
            if(!isdigit(t)) {
                ans = false;
                break;
            }
        }
    }else {
        ans = false;
    }
    return ans;
}