#include <bits/stdc++.h>
using namespace std;
string ans;
int month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string s[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
string solution(int a, int b) {
    int mday = 0;
    for(int i = 0; i < a-1; i++) mday += month[i];
    mday += b - 1;
    int t = mday % 7;
    ans = s[t];
    return ans;
}