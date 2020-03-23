#include <iostream>
using namespace std;
int arr[101], N;
int main() {
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < N - 1; i++) {
        int idx = i;
        for(int j = i + 1; j < N; j++) {
            if(arr[idx] > arr[j]) idx = j;
        }
        int temp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = temp;
    }
    for(int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
}