#include <bits/stdc++.h>
using namespace std;
int a, b, arr[22], ch[22], ans = -1;
void dfs(int cnt, int sum) {
	if(cnt >= 6) {
		return;
	}
	
	if(sum == a) {
		ans = a;
		return;
	}
	for(int i = 0; i < b; i++) {
		if(!ch[i]) {
			ch[i] = 1;
			int tmp = sum + arr[i];
			if(tmp > a) {
				ans = max(ans, sum);
			}else {
				dfs(cnt + 1, tmp);
			}
			ch[i] = 0;
		}
	}
}
int main() {
	cin.tie(0);
	cin >> a;
	cin >> b;
	for(int i = 0; i < b; i++) cin >> arr[i];
	dfs(0, 0);
	cout << ans << "\n";
	return 0;
}