#include <iostream>
using namespace std;
int ch[101];
int N;

void dfs(int n) {
    if(n == N + 1) {
        for(int i = 1; i <= N; i++) {
            if(ch[i] != 0) cout << i << " ";
        }
        cout << endl;
        return;
    }
    ch[n] = 1;
    dfs(n+1);
    ch[n] = 0;
    dfs(n+1);
}

int main() {
    cin >> N;
    dfs(1);
}