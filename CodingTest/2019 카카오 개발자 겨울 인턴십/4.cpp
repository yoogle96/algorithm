#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

map<ll, ll> m;
int n;
ll find(ll a) {
    if(m.count(a) == 0) return m[a] = a;
    else return m[a] = find(m[a]);
}
vector<ll> solution(ll k, vector<ll> room_number) {
    vector<ll> answer;
    n = room_number.size();
    for(int i = 0; i < n; i++) {
        ll v = find(room_number[i]);
        answer.push_back(v);
        m[v]++;
    }
    return answer;
}