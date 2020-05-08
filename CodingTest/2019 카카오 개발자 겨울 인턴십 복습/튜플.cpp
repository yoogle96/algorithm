#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
map<int, vector<int>> m1;
int arr[100001];
vector<int> v1;
vector<vector <int>> v2;
bool isOpen;
vector<int> solution(string s) {
    int sz = s.size();
    string num;
    for(int i = 1; i < sz - 1; i++) {
        if(isdigit(s[i])) {
            num += s[i];
        }else {
            if(s[i] == '{') {
                isOpen = true;
            }else if(s[i] == '}') {
                v1.push_back(stoi(num));
                num.clear();
                v2.push_back(v1);
                v1.clear();
                isOpen = false;
            }else if(s[i] == ',') {
                if(isOpen) {
                    v1.push_back(stoi(num));
                    num.clear();
                }
            }
        }
    }
    for(auto t : v2) m1[t.size()] = t;
    for(auto t : m1) {
        for(auto tt : t.second) {
            if(!arr[tt]) {
                arr[tt] = 1;
                ans.push_back(tt);
            }
        }
    }
    return ans;
}