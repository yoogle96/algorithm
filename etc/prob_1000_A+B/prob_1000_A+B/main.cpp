#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int ans;
int solution(string s, vector<string> v) {
    int n = v.size();
    int n2 = s.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int total = 0, cnt = 0, mx = -2147000000;
            for(int k = 0; k < n; k++) {
                if(s[k] != v[i][k] && v[i][k] == v[j][k]) {
                    total++;
                    cnt++;
                }else {
                    mx = max(mx, cnt);
                    cnt = 0;
                }
            }
            cout << total << endl;
            cout << mx << endl;
            ans = max(ans, (total + (mx * mx)));
        }
    }
    return ans;
}


int main() {
    cout << solution("24551", {"24553", "24553", "24553", "24553"}) << endl;
}
