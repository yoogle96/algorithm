#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
vector< pair<string, int> > v;
map< pair<string, int>, vector<int>> m;
map<string, vector<int>> mv;
map<string, int> m2;
vector< pair<string, int> > v2;

bool cmp(pair<string, int> p1, pair<string, int> p2) {
    return p1.second > p2.second;
}
vector<int> solution(vector<string> genres, vector<int> plays) {
    for(int i = 0; i < genres.size(); i++) {
        m2[genres[i]] += plays[i];
        m[ make_pair(genres[i], plays[i]) ].push_back(i);
        mv[genres[i]].push_back(plays[i]);
    }
    
    for(auto t : m2) v2.push_back(make_pair(t.first, t.second));
    sort(v2.begin(), v2.end(), cmp);
    for(auto t : v2) {
        sort(mv[t.first].begin(), mv[t.first].end(), greater<int>());
        int cnt = 0;
        for(auto tt : mv[t.first]) {
            if(cnt >= 2) break;
            v.push_back(make_pair(t.first, tt));
            cnt++;
        }
    }

    for(auto t : v) {
        for(auto tt : m[ make_pair(t.first, t.second) ]) ans.push_back(tt);
        m.erase( m.find(make_pair(t.first, t.second)));
    }
    return ans;
}