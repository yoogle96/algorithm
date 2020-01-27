#include <vector>
#include <queue>
using namespace std;

int answer;
priority_queue<int> q;
int solution(int stock, vector<int> dates, vector<int> supplies, int k) {
    int idx = 0;
    for(int i = 0; i < k; i++) {
        if(idx < dates.size() && i == dates[idx]) {
            q.push(supplies[idx]);
            idx++;
        }

        if(stock == 0) {
            stock += q.top(); q.pop();
            answer++;
        }

        stock--;
    }

    return answer;
}