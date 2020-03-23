#include <iostream>
using namespace std;
int arr[101], temp[101], left, right, N;

void divide(int left, int right) {
    if(left >= right) {
        return;
    }else {
        int mid = (left+right) / 2;
        divide(left, mid);
        divide(mid + 1, right);

        int p1 = left;
        int p2 = mid + 1;
        int p3 = left;
        while(p1 <= mid && p2 <= right) {
            if(arr[p1] < arr[p2]) {
                temp[p3++] = arr[p1++];
            }else {
                temp[p3++] = arr[p2++];
            }
        }

        while(p1 <= mid) temp[p3++] = arr[p1++];
        while(p2 <= right) temp[p3++] = arr[p2++];
        for(int i = left; i <= right; i++) {
            arr[i] = temp[i];
        }
    }
}

int main() {
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> arr[i];
    divide(1, N);

    for(int i = 1; i <= N; i++) {
        cout << arr[i] << " ";
    }
}