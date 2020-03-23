#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
vector< pair<int, int> > v;
priority_queue<int> pq;
int N, M, D, answer;

bool com(pair<int, int> p1, pair<int, int> p2) {
    return p1.second > p2.second;
}

int main() {
    cin >> N;
    for(int i = 0 ; i < N; i++) {
        cin >> M >> D;
        v.push_back(make_pair(M, D));
    }
    sort(v.begin(), v.end(), com);
    pq.push(v[0].first);
    int temp = v[0].second;
    for(int i = 1; i < v.size(); i++) {
        if(temp != v[i].second) {
            for(int j = temp; j > v[i].second; j--) {
                if(!pq.empty()) {
                    answer += pq.top();
                    pq.pop();
                }
            }
            temp = v[i].second;
        }
        pq.push(v[i].first);
    }
    answer += pq.top();
    cout << answer;
}