#include <iostream>
#include <string>
#include <stack>

using namespace std;
int N, arr[100], num, len;
stack<double> s;
string str;
int main() {
    cin >> N;
    cin >> str;
    len = str.size();
    for(int i = 65; i < 65 + N; i++) {
        cin >> num;
        arr[i] = num;
    }
    for(int i = 0; i < len; i++) {
        char token = str[i];
        if(token <= 'Z' && token >= 'A' ) {
            s.push(arr[token]);
        }else {
            double num2= s.top(); s.pop();
            double num1 = s.top(); s.pop();
            if(token == '+') {
                s.push(num1 + num2);
            } else if(token == '-') {
                s.push(num1 - num2);
            } else if(token == '*') {
                s.push(num1 * num2);
            } else if(token == '/') {
                s.push(num1 / num2);
            }
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << s.top();
}