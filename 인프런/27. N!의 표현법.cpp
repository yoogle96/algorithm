#include <iostream>
using namespace std;
int N, num, temp, arr[1001];
int main() {
    cin >> N;
    for(int i = 2; i <= N; i++) {
        temp = i;
        num = 2;
        while(1) {
            if(temp % num == 0) {
                temp /= num;
                arr[num]++;
            }else num++;
            if(temp == 1) break;
        }
    }

    cout << N << "! = ";
    for(int i = 1 ; i <= N; i++) {
        if(arr[i] != 0) cout << arr[i] << " ";
    }
}