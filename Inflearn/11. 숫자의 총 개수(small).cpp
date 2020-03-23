#include <iostream>
using namespace std;
int N, cnt;
int main() {
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cnt++;
        int temp = i;
        while(temp >= 10) {
            temp/=10;
            cnt++;
        }
    }
    cout << cnt;
}