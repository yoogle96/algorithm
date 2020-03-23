#include <iostream>
using namespace std;
int N, cnt, digit, temp;
int main() {
    cin >> N;
    for(int i = 1; i <= N; i++) {
        temp = i;
        while(temp) {
            digit = temp % 10;
            if(digit == 3) cnt++;
            temp/=10;
        }
    }
    cout << cnt;
}