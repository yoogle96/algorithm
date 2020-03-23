#include <iostream>
#include <string>
#include <stack>

using namespace std;
string s, answer;
char cmd, alpha;
int M, idx, strSize;
stack<char> sStack, temp;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> s;
    cin >> M;
    strSize = s.size();
    idx = strSize;
    for(int i = 0; i < strSize; i++) sStack.push(s[i]);

    while(M--) {
        cin >> cmd;
        if(cmd == 'L') {
            if(!sStack.empty()) {
                temp.push(sStack.top());
                sStack.pop();
            }
        } else if(cmd == 'D') {
            if(!temp.empty()) {
                sStack.push(temp.top());
                temp.pop();
            }
        } else if(cmd == 'B') {
            if(!sStack.empty()) {
                sStack.pop();
            }
        } else if(cmd == 'P') {
            cin >> alpha;
            sStack.push(alpha);
        }
    }

    while(!sStack.empty()) {
        temp.push(sStack.top());
        sStack.pop();
    }

    while(!temp.empty()) {
        answer += temp.top();
        temp.pop();
    }

    cout << answer;
}