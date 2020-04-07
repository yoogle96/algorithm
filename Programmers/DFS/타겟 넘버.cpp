#include <bits/stdc++.h>
using namespace std;
int ans, t;
vector<int> v;
void dfs(int cur, int sum) {
    if(cur == v.size()) {
        if(sum == t) ans++;
        return;
    }
    
    dfs(cur + 1, sum + v[cur]);
    dfs(cur + 1, sum - v[cur]);
}

int solution(vector<int> numbers, int target) {
    v = numbers;
    t = target;
    dfs(0, 0);
    return ans;
}