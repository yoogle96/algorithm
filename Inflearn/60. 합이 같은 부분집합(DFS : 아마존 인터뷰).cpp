#include <iostream>
using namespace std;
int N, total, arr[11];
bool flag;

void DFS(int n, int sum) {
    if(sum > (total/2))
    if(flag) return;
    if(n == N + 1) {
        if(sum == (total - sum)) flag = true;
    }else {
        DFS(n+1, sum + arr[n]);
        DFS(n+1, sum);
    }
}

int main() {
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cin >> arr[i];
        total += arr[i];
    }
    DFS(1, 0);
    if(flag) cout << "YES";
    else cout << "NO";
}