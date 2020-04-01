#include <bits/stdc++.h>
using namespace std;
int n, m;
string s;
vector<char> ans;
int main() {
	cin >> n >> m;
    for(int i = 0; i < n; i++) ans.push_back('A' + i);
	while(m--) {
		cin >> s;
		int first, second;
		for(int i = 0; i < ans.size(); i++) {
				if(s[0] == ans[i]) first = i;
				if(s[1] == ans[i]) second = i;
		}
		if(first < second) continue;
		char temp = ans[second];
		ans.erase(ans.begin() + second);
		ans.insert(ans.begin() + first, temp);
	}
	
	for(auto t : ans) cout << t;
	return 0;
}