#include <bits/stdc++.h>
using namespace std;
string ans;
string solution(string s) {
    if(s.size() % 2 == 0) ans = s.substr(s.size()/2-1, 2);
    else ans = s[s.size()/2];
    return ans;
}