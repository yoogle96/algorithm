#include <iostream>
using namespace std;
int arr[101], N;
int main() {
    cin >> N;
    for(int i = 0; i < N; i++) cin >> arr[i];
    for(int i = 1; i < N; i++) {
        int temp = arr[i];
        int j;
        for(j = i; j > 0; j--) {
            if(temp < arr[j-1]) arr[j] = arr[j-1];
            else break;
        }
        arr[j] = temp;
    }
    for(int i = 0; i < N; i++) cout << arr[i] << " ";
}