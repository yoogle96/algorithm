#include <string>
#include <vector>
#include <stack>

using namespace std;

int answer = 0;
stack<pair<string, int>> s;
stack<pair<string, int>> tempS;

int solution(string arrangement) {
    for(int i = 0; i < arrangement.size(); i++) {
        // 레이저일 경우
        if(arrangement[i] == '(' && arrangement[i+1] == ')') {
            while(!s.empty()) {
                s.top().second++;
                tempS.push(s.top());
                s.pop();
            }

            while(!tempS.empty()) {
                s.push(tempS.top());
                tempS.pop();
            }

            i++;
            continue;

        }else if(arrangement[i] == '(') {

            s.push(make_pair(")", 1));

        }else if(arrangement[i] == ')') {

            answer += s.top().second;
            s.pop();
        }
    }

    return answer;
}