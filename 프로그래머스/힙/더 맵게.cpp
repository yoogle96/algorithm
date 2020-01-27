#include <string>
#include <vector>
#include <queue>

using namespace std;

int answer;
priority_queue< int, vector<int> ,greater<int> > q;
int solution(vector<int> scoville, int K) {

    for(int i = 0; i < scoville.size(); i++) {
        q.push(scoville[i]);
    }

    while(q.size() > 1) {
        int first = q.top(); q.pop();
        int sec = q.top(); q.pop();
        q.push(first + (sec * 2));
        answer++;
        if(q.top() >= K) break;
    }

    if(q.top() < K) {
        answer = -1;
    }

    return answer;
}