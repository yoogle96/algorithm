#include <iostream>
#include <algorithm>
using namespace std;
int N, arr[1001], temp, num;
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
    cout << min(arr[2], arr[5]);
}