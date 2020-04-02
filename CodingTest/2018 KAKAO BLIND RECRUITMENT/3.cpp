#include <bits/stdc++.h>
using namespace std;
int ans, hab, gyo;
string isCh(string s) {
    for(int i = 0; i < s.size(); i++) {
        if((s[i] < 65 || s[i] > 90) && (s[i] < 97 || s[i] > 122)) {
            s.clear();
            return s;
        }else if(s[i] >= 97 && s[i] <= 122){
            s[i] = s[i] - 32; 
        }
    }
    return s;
}

map<string, int> myMap1, myMap2;
int solution(string s1, string s2) {
    int n = s1.size(), m = s2.size();
    for(int i = 0; i < n - 1; i++) {
        string token = s1.substr(i, 2);
        token = isCh(token);
        if(token == "") {
            continue;
        }else {
            myMap1[token]++;
        }
    }
    for(int i = 0; i < m - 1; i++) {
        string token = s2.substr(i, 2);
        token = isCh(token);
        if(token == "") {
            continue;
        }else {
            myMap2[token]++;
        }
    }
    for(auto t : myMap1) {
        if(myMap2.count(t.first) > 0) {
            gyo += min(myMap1[t.first], myMap2[t.first]);
            hab += max(myMap1[t.first], myMap2[t.first]);
        }else {
            hab += t.second;
        }
    }
    
    for(auto t : myMap2) {
        if(myMap1.count(t.first) == 0) {
            hab += t.second;
        }
    }
    
    if(gyo == 0 && hab == 0) {
        gyo = 1; hab = 1;
    }
    ans = ((double)gyo/(double)hab) * 65536;
    
    return ans;
}