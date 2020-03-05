#include <iostream>
#include <string>
using namespace std;
int arr[200];
int main() {
    freopen("/Users/yoogle/Desktop/yoogle/Programming/BeakJoon/인프런/input.txt", "r", stdin);
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        arr[s[i]]++;
    }

    for(int i = 97; i <= 122; i++) {
        cout << (char)i << " : " << arr[i] << endl;
    }
}