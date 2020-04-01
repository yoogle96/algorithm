#include <bits/stdc++.h>
using namespace std;
int ans, cnt = 1;
int main() {
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == 'o') {
			ans += cnt++;
		}else {
			cnt = 1;
		}
	}
	cout << ans << endl;
}