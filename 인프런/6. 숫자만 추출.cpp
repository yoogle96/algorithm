#include <iostream>
#include <string>
using namespace std;
string s, num;
int len, cnt;
int main() {
    cin >> s;
    len = s.size();
    for(int i = 0; i < len; i++) {
        if(isdigit(s[i])) num += s[i];
    }
    int answer = stoi(num);
    for(int i = 1; i <= answer; i++) {
        if(answer % i == 0) cnt++;
    }

    cout << answer << endl;
    cout << cnt << endl;
}