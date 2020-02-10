#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string s;
int len;
int main() {
    getline(cin, s);
    len = s.size();
    for(int i = 0; i < len; i++) {
        if(s[i] == ' ') {
            s.erase(s.begin() + i);
            i--;
        }
    }
    // 문자 비교 후 아스키코드 연산
    for(int i = 0; i < s.size(); i++) {
        if(s[i]<='Z' && s[i]>='A')
            s[i] -= ('Z'-'z');
    }
    // transform 함수 사용
    // transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s;
}

