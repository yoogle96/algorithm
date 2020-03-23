#include <iostream>
#include <stack>
using namespace std;
stack<int> s;
int N, temp, top, answer;
int main() {
    cin >> N;
    while(N--) {
        cin >> temp;
        s.push(temp);
    }

    top = s.top(); s.pop();
    answer++;
    while(!s.empty()) {
        if(top < s.top()) {
            top = s.top();
            answer++;
        }
        s.pop();
    }

    cout << answer;
}