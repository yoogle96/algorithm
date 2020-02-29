#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int V, E, A, B, C, ch[30], answer;

// bool cmp(pair<int, int> p1, pair<int, int> p2) {
//     return p1.second < p2.second;
// }

struct cmp{
    bool operator()(pair<int, int> p1, pair<int, int> p2){
        return p1.second > p2.second;
    }
};

int main() {
    priority_queue< pair<int, int>, vector< pair<int, int> > ,cmp> q;
    vector< pair<int, int> > map[30];
    cin >> V >> E;
    for(int i = 0; i < E; i++) {
        cin >> A >> B >> C;
        // 인접리스트 생성
        map[A].push_back(make_pair(B, C));
        map[B].push_back(make_pair(A, C));
    }
    q.push(make_pair(1, 0));
    while(!q.empty()) {
        pair<int, int> temp = q.top();
        q.pop();
        int v = temp.first;
        int cost = temp.second;
        if(ch[v] == 0) {
            answer += cost;
            ch[v] = 1;
            for(int i = 0 ; i < map[v].size(); i++) {
                q.push(make_pair(map[v][i].first, map[v][i].second));
            }
        }
    }

    cout << answer;
}