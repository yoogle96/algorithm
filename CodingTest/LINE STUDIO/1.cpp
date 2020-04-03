#include <bits/stdc++.h>
using namespace std;

int n, ch[3] = {-1, 0, 1};
bool ans;
vector<int> v;
void dfs(int cur, int idx) {
    if(idx == n - 1) {
        ans = true;
        return;
    }
    for(int i = 0; i < 3; i++) {
        for(int j = idx + 1; j < n; j++) {
            if(v[idx] + (cur + ch[i]) == v[j]) {
                dfs(cur + ch[i], j);
            }
        }
    }
}

bool solution(vector<int> stones) {
    v = stones;
    n = stones.size();
    dfs(1, 1);
    
    return ans;
}

int main() {
    // cout << solution({0, 1, 3, 5, 6, 8, 12, 17}) << endl; // Expected : True, Output : True
    // cout << solution({0, 1, 2, 3, 4, 8, 9, 11}) << endl; // Expected : False, Output : False
    // cout << solution({0, 1, 3, 4, 5, 7, 9, 10, 12}) << endl; // Expected : True, Output : True
    // cout << solution({0, 1, 2, 3, 4, 5, 6, 12}) << endl; // Expected : False, Output : False
    // cout << solution({0, 1, 3, 6, 10, 15, 16, 21}) << endl; // Expected : True, Output : True
}