#include <iostream>
#include <stack>

using namespace std;

stack<pair<int, int> > s;
int N, flag, score, minute, answer;
int main() {
    cin >> N;
    while(N--) {
        cin >> flag; 
        if(flag) {
            cin >> score;
            cin >> minute;

            s.push(make_pair(score, minute));
            s.top().second--;
        }else {
            if(!s.empty()) s.top().second--;
        }

        if(!s.empty() && s.top().second == 0) {
            answer += s.top().first;
            s.pop();
        }
    }

    cout << answer;
}