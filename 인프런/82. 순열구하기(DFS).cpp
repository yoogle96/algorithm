#include <iostream>
using namespace std;
int N, R, arr[16], ch[16], res[4], a, cnt;

void DFS(int n) {
    if(n == R) {
        for(int j = 0; j < n; j++) {
            cout << res[j] << " ";
        }
        cout << endl;
        cnt++;
    }else {
        for(int i = 1; i <= N; i++) {
            if(ch[i] == 0) {
                res[n] = arr[i];
                ch[i] = 1;
                DFS(n + 1);
                ch[i] = 0;
            }
        }
    }
}

int main() {
    cin >> N >> R;
    for(int i = 1; i <= N; i++) {
        cin >> a;
        arr[i] = a;
    }
    ch[0] = 1;
    DFS(0);
    cout << cnt;
}