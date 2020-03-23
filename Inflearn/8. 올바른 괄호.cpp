#include <iostream>
#include <string>
using namespace std;
string s, answer;
int cnt;
int main() {
    cin >> s;
    int len = s.size();
    for(int i = 0; i < len; i++) {
        if(s[i] == '(') {
            cnt++;
        }else{
            cnt--;
        }
        if(cnt < 0) break;
    }
    if(cnt == 0) answer = "YES";
    else answer = "NO";

    cout << answer;
}