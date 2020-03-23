#include <iostream>
#include <string>
using namespace std;
string s, sex;
int age;
int main() {
    int nowYear = 2019;
    cin >> s;
    int year = stoi(s.substr(0, 2));
    char flag = s[7];
    if(flag == '1' || flag == '2') {
        year += 1900;
        age = nowYear - year + 1;
        if(flag == '1') sex = "M";
        else sex = "W";
    }else {
        year += 2000;
        age = nowYear - year + 1;
        if(flag == '3') sex = "M";
        else sex = "W";
    }
    cout << age << " " << sex;
}