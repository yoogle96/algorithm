#include <iostream>
using namespace std;
int N, K, sum, maxx, arr[100001], cnt;
int main() {
    cin >> N >> K;
    maxx = -55555555;
    for(int i = 1; i <= N; i++) {
        cin >> arr[i];
        sum += arr[i];
        cnt++;
        if(cnt >= K) {
            sum -= arr[i - K];
            if(maxx < sum) maxx = sum;
        }
    }
    cout << maxx;
}