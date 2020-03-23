#include <string>
#include <vector>
#include <queue>

using namespace std;

int answer;
int curIdx;
int curTime;
int curWeight;
queue<pair<int, int>> q;


int solution(int bridge_length, int weight, vector<int> truck_weights) {

    while(true) {

        if(!q.empty()) {
            for(int i = 0; i < q.size(); i++) {
                q.front().second--;
                q.push(q.front());
                q.pop();
            }

            if(q.front().second == 0) {
                curWeight -= q.front().first;
                q.pop();
            }
        }

        if(weight >= curWeight + truck_weights[curIdx] && curIdx < truck_weights.size()) {
            q.push(make_pair(truck_weights[curIdx], bridge_length));
            curWeight += truck_weights[curIdx];
            curIdx++;
        }

        curTime++;

        if(q.empty()) {
            break;
        }
    }

    answer = curTime;

    return answer;
}