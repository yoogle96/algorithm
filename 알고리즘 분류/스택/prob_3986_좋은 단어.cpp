#include <iostream>
#include <string>
#include <stack>

using namespace std;

string word;
int N, answer;
int main() {
    cin >> N;
    while(N--) {
        stack<char> s;
        cin >> word;
        for(int i = 0; i < word.length(); i++) {
            if(s.empty() || s.top() != word[i]) s.push(word[i]);
            else s.pop();
        }
        if(s.empty()) answer++;
    }

    cout << answer;
}