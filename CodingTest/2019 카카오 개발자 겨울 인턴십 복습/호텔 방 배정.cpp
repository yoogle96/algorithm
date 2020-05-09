#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<ll> ans;
map<ll, ll> m;
ll find(ll n) {
    if(!m.count(n)) return m[n] = n;
    return m[n] = find(m[n] + 1);
}
vector<ll> solution(ll k, vector<ll> rn) {
    for(auto t : rn) ans.push_back(find(t));
    return ans;
}