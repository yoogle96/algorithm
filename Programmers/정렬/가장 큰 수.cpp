#include <bits/stdc++.h>
using namespace std;
string ans;
bool cmp(string a, string b) {
    return a + b > b + a;
}
string solution(vector<int> numbers) {
    vector<string> tmp;
    for(auto t : numbers) tmp.push_back(to_string(t));
    sort(tmp.begin(), tmp.end(), cmp);
    if (tmp[0] == "0") return "0";
    for(auto t : tmp) {
        ans += t;
    }
    return ans;
}