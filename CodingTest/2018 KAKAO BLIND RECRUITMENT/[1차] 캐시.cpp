#include <bits/stdc++.h>
using namespace std;
int ans;
set<string> st;
deque<string> q;
int solution(int cs, vector<string> c) {
    if(cs == 0) return 5 * c.size();
    for(auto s : c) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if(st.find(s) != st.end()) { // hit
            ans += 1;
            for(int i = 0; i < cs; i++) {
                string tmp = q.front();
                q.pop_front();
                if(tmp != s) {
                    q.push_back(tmp);
                }
            }
            q.push_front(s);
        }else { // miss
            ans += 5;
            if(q.size() == cs) {
                st.erase(st.find(q.back()));
                q.pop_back();
            }
            st.insert(s);
            q.push_front(s);
        }
    }
    return ans;
}

int main() {
    // cout << solution(3, {"Jeju", "Pangyo", "Seoul", "NewYork", "LA", "Jeju", "Pangyo", "Seoul", "NewYork", "LA"});
    // cout << solution(3, {"Jeju", "Pangyo", "Seoul", "Jeju", "Pangyo", "Seoul", "Jeju", "Pangyo", "Seoul"});
    // cout << solution(2, {"Jeju", "Pangyo", "Seoul", "NewYork", "LA", "SanFrancisco", "Seoul", "Rome", "Paris", "Jeju", "NewYork", "Rome"});
    cout << solution(1, {});
}