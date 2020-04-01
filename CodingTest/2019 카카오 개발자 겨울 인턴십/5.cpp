#include <bits/stdc++.h>
using namespace std;

multiset<int, greater<int> > ms;
int solution(vector<int> stones, int k) {
    int n = stones.size();
    for(int i = 0; i < k; i++) ms.insert(stones[i]);
    int mn = *ms.begin();
    for(int i = k; i < n; i++) {
        ms.erase(ms.find(stones[i - k]));
        ms.insert(stones[i]);
        mn = min(mn, *ms.begin());
    }
    return mn;
}