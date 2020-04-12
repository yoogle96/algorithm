#include <bits/stdc++.h>
using namespace std;
int n;
bool isSafe(string s) {
    int len = s.size();
    for(int i = 1; i <= len / 2; i++) {
        if(s.substr(len - i, i) == s.substr(len - i * 2, i)) {
            return false;
        }
    }
    return true;
}

void dfs(int v, string s) {
    if(v == n) {
        cout << s << endl;
        exit(0);
    }
    for(int i = 1; i <= 3; i++) {
        if(isSafe(s + to_string(i))) {
            dfs(v + 1, s + to_string(i));
        }
    }
}
int main() {
    cin >> n;
    dfs(0, "");
}