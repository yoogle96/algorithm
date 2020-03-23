#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;
int N;
string answer;
stack<int> s;
int main() {
    int cnt = 1;
    cin >> N;
    vector<int> v(N);
    bool flag = true;
    for(int i = 0; i < N; i++) {
        cin >> v[i];
    }
    for(int i = 0; i < N; i++) {
        s.push(v[i]);
        answer += "P";
        if(v[i] == cnt) {
            while(!s.empty()) {
                int temp = s.top();
                s.pop();
                answer+="O";
                cnt++;
                if(!s.empty()) {
                    if(s.top() != temp + 1) {
                        break;
                    }
                }
            }
        }
    }

    if(s.empty()) {
        cout << answer;
    }else {
        cout << "impossible";
    }
    
}