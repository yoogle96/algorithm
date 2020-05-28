#include <bits/stdc++.h>
using namespace std;
string ans;
string solution(string s) {
    sort(s.begin(), s.end(), greater<char>());
    ans = s;
    return ans;
}