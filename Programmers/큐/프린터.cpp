#include <string>
#include <vector>
#include <queue>

using namespace std;

int answer;
queue<pair<int, int>> q;
int solution(vector<int> priorities, int location) {

    for(int i = 0; i < priorities.size(); i++) {
        q.push(make_pair(i, priorities[i]));
    }

    while(true) {
        bool check = false;
        int tempLoc = q.front().first;
        int tempPri = q.front().second;
        q.pop();

        for(int i = 0; i < q.size(); i++) {
            if(q.front().second > tempPri && !check) {
                check = true;
            }
            q.push(q.front());
            q.pop();
        }

        if(check) {
            q.push(make_pair(tempLoc, tempPri));
        }else {
            answer++;
            if(tempLoc == location) break;
        }
    }

    return answer;
}