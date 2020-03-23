#include <iostream>
#include <algorithm>
using namespace std;
int N, arr[101], input, pre, distancee;
bool flag;
int main() {
    cin >> N;
    cin >> pre;
    for(int i = 1; i < N; i++) {
        cin >> input;
        distancee = abs(input - pre);
        if(distancee < N && arr[distancee] == 0) {
            arr[distancee]++;
        }else {
            cout << "NO";
            return 0;
        }
        pre = input;
    }
    cout << "YSE";
}