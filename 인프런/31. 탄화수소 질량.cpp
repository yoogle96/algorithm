#include <iostream>
#include <string>
using namespace std;
string s;
int c, h;
char token;
int main() {
    cin >> s;
    if(isdigit(s[1])) {
        token = s[1];
        c = atoi(&token);
        int i;
        for(i = 2; isdigit(s[i]); i++) {
            token = s[i];
            c = (c * 10) + atoi(&token);
        }
        i++;
        if(i == s.size()) {
            h = 1;
        } else {
            token = s[i];
            h = atoi(&token);
            i++;
            for(i = i; i < s.size(); i++) {
                token = s[i];
                h = (h * 10) + atoi(&token);
            }
        }
    }else {
        token = s[2];
        c = 1;
        h = atoi(&token);
        for(int i = 3; i < s.size(); i++) {
            token = s[i];
            h = (h * 10) + atoi(&token);
        }
    }
    cout << (c * 12) + (h);
}