#include <bits/stdc++.h>
using namespace std;
int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1}, MAP[4][4], ans[4][4], ch[4][4];
void dfs(int x, int y) {
	if(x == 3 && y == 3) {
		for(int i = 0; i < 4; i++) {
			cout << " ";
			for(int j = 0; j < 3; j++) {
				cout << ans[i][j] << "  ";
			}
			cout << ans[i][3] << " \n";
		}
		return;
	}
	
	for(int i = 0; i < 4; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];
		if(xx < 0 || xx >= 4 || yy < 0 || yy >= 4) continue;
		if(!ch[xx][yy] && MAP[xx][yy]) {
			ch[xx][yy] = 1;
			ans[xx][yy] = 1;
			dfs(xx, yy);
			ch[xx][yy] = 0;
			ans[xx][yy] = 0;
		}
	}
}
int main() {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			cin >> MAP[i][j];
		}
	}
	ans[0][0] = 1;
	ch[0][0] = 1;
	dfs(0, 0);
	return 0;
}