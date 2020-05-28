#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
vector<int> solution(vector<int> arr, int divisor) {
    for(auto t : arr) if(t % divisor == 0) ans.push_back(t);
    sort(ans.begin(), ans.end());
    if(ans.empty()) ans.push_back(-1);
    return ans;
}