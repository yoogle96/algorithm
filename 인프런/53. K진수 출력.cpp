#include <iostream>
#include <string>
#include <stack>
using namespace std;
int N, K;
stack<int> s;
int main() {
    char str[20] = "0123456789ABCDEF";
    cin >> N >> K;
    while(N > 0) {
        s.push(N % K);
        string test;
        N /= K;
    }
    while(!s.empty()) {
        cout << str[s.top()];
        s.pop();
    }
}