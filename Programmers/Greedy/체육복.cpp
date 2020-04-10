#include <bits/stdc++.h>
using namespace std;
int ans, students[31];
int solution(int n, vector<int> lost, vector<int> reserve) {
    ans = n - lost.size();
    for(auto t : reserve) students[t]++;
    for(int i = 0; i < lost.size(); i++) {
        if(students[lost[i]]) {
            students[lost[i]]--;
            ans++;
            lost[i] = -1;
        }
    }
    int cnt = 0;
    for(auto t : lost) {
        if(t == -1) continue;
        if(students[t - 1]) {
            cnt++;
            students[t - 1]--;
        }else if(students[t + 1]) {
            cnt++;
            students[t + 1]--;
        }
    }
    ans += cnt;
    return ans;
}