#include <bits/stdc++.h>
using namespace std;
vector<string> ans;
int N;
bool cmp(string s1, string s2) {
    if(s1[N] != s2[N]) return s1[N] < s2[N];
    else return s1 < s2;
}
vector<string> solution(vector<string> strings, int n) {
    N = n;
    sort(strings.begin(), strings.end(), cmp);
    return strings;
}