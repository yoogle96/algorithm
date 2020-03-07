#include <bits/stdc++.h>
using namespace std;
string s;
int n;
map< string, int > m;
int main() {
    cin >> n >> s;
    for(int i = 0; i < n - 1; i++) {
        string temp = s.substr(i, 2);
        m[temp]++;
    }
    pair <string, int> maxx;
    for(auto t : m) {
        if(maxx.second < t.second) maxx = t;
    }
    cout << maxx.first << endl;
}