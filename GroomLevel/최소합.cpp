#include <bits/stdc++.h>
using namespace std;
int n, arr[11][11], ch[11], ans = 2147000000;

void dfs(int cnt, int sum) {
	if(cnt == n) {
		ans = min(ans, sum);
		return;
	}
	
	for(int i = 0; i < n; i++) {
		if(!ch[i]) {
			ch[i] = 1;
			int tmp = sum + arr[cnt][i];
			dfs(cnt + 1, tmp);
			ch[i] = 0;
		}
	}
}

int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	dfs(0, 0);
	cout << ans << "\n";
	return 0;
}