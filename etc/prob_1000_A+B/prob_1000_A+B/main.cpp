#include <iostream>
using namespace std;
int ans = -1;
int nn, mm, kk, arr[151];
void dfs(int cnt, int cur, int slop) {
    if(cnt == nn) {
        for(int i = 0; i < mm; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }
    int j = cur;
    for(int i = 0; i < kk; i++) {
        if(slop) {
            for(j = cur; j <= cur + i; j++) {
                arr[j] = 1;
            }
            dfs(cnt + 1, j, 0);
        }else {
            for(j = cur; j <= cur + i; j++) {
                arr[j] = -1;
            }
            dfs(cnt + 1, j, 1);
        }
    }
}

int solution(int n, int m, int k) {
    nn = n;
    mm = m;
    kk = k;
    dfs(0, 0, 1);
    
    return ans;
}

int main() {
    cout << solution(3, 8, 4) << endl;
}
