#include <iostream>
#include <algorithm>
using namespace std;
int N, arr[1501];
int main() {
    int p2, p3, p5, min = 2147000000;
    cin >> N;
    arr[1] = 1;
    p2=p3=p5=1;
    for(int i = 2; i <= N; i++) {
        if(arr[p2] * 2 < arr[p3] * 3) min = arr[p2] * 2;
        else min = arr[p3] * 3;
        if(arr[p5] * 5 < min) min = arr[p5] * 5;
        if(arr[p2] * 2 == min) p2++;
        if(arr[p3] * 3 == min) p3++;
        if(arr[p5] * 5 == min) p5++;
        arr[i] = min;
    }

    cout << arr[N];
}