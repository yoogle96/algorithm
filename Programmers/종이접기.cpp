#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
vector<int> solution(int n) {
    ans.push_back(0);
    for(int i = 2; i <= n; i++) {
        ans.push_back(0);
        int mid = (ans.size() - 2);
        for(int j = mid; j >= 0; j--) {
            if(ans[j] == 0) ans.push_back(1);
            else ans.push_back(0);
        }
    }
    return ans;
}