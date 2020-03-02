
#include <iostream>
using namespace std;
int n, r, ch[20];

void DFS(int s, int L) {
    if(L == r) {
        for(int i = 0; i < L; i++) {
            cout << ch[i] << " ";
        }
        cout << endl;
    }else {
        for(int i = s; i <= n; i++) {
            ch[L] = i;
            DFS(i + 1, L + 1);
        }
    }
}

int main() {
    cin >> n >> r;
    DFS(0, 0);
}
