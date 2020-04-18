#include <bits/stdc++.h>
using namespace std;
int n, arr[20][20], col[20];
long long ans;
bool isGood(int q) {
    for(int i = 0; i < q; i++) {
        // 같은 행에 있거나 대각선에 있는 경우 false 반환
        if(col[i] == col[q] || abs(col[q]- col[i]) == (q - i)) return false;
    }
    return true;
}

void dfs(int q) {
    if(q == n) {
        ans++;
        return;
    }
    for(int i = 0; i < n; i++) {
        // col[q]의 값은 row(행) 값
        // 즉, 현재 열(q)에 i번째 행에 퀸 대입
        col[q] = i;
        if(isGood(q)) {
            dfs(q + 1);
        }
    }
}
int main() {
    cin >> n;
    dfs(0);
    cout << ans << endl;
}