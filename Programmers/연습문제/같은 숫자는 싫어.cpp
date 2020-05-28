#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
int _prev = -1;
vector<int> solution(vector<int> arr) 
{
    for(auto t : arr) {
        if(_prev == t) continue;
        else {
            ans.push_back(t);
            _prev = t;
        }
    }
    return ans;
}