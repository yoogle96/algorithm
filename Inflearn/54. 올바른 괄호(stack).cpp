#include <iostream>
#include <stack>
#include <string>
using namespace std;
stack<char> s;
string str;
int main() {
    cin >> str;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '(') {
            s.push(str[i]);
        }else {
            if(s.empty()) {
                cout << "NO";
                return 0;
            }else s.pop();
        }
    }
    if(!s.empty()) {
        cout << "NO";
    }else {
        cout << "YES";
    }
}