#include <bits/stdc++.h>
using namespace std;
string ans;
string solution(vector<string> s) {
    int i;
    for(i = 0; i < s.size(); i++) if(s[i] == "Kim") break;
    string si = to_string(i);
    ans = "김서방은 ";
    ans += (si + "에 있다");
    return ans;
}