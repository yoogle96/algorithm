#include <iostream>
using namespace std;
int N, arr[101];
int main() {
    cin >> N;
    for(int i = 0; i < N; i++) cin >> arr[i];

    for(int i = 0; i < N; i++) {
        if(arr[i] < 0) {
            for(int j = i; j > 0; j--) {
                if(arr[j - 1] < 0) break;
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
}