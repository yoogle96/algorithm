#include <iostream>
using namespace std;
int N, arr[101], rankk,resIdx, pre;
int main() {
    resIdx = 2;

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0; i < N - 1; i++) {
        int idx = i;
        for(int j = i + 1; j < N; j++) {
            if(arr[idx] < arr[j]) idx = j;
        }
        if(arr[idx] == pre) resIdx++;
        else rankk++;
        int temp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = temp;
        pre = arr[i];
        if(rankk == 3) break;
    }
    cout << arr[resIdx];
}