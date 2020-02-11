#include <iostream>
using namespace std;
int N, cnt;
bool flag;
int main() {
    cin >> N;
    for(int i = 2; i <= N; i++) {
        flag = false;
        for(int j = 2; j*j <= i; j++) {
            if(i % j == 0) {
                flag = true;
                break;
            }
        }
        if(!flag) cnt++;
    }
    cout << cnt;
}