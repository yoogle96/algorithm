#include <bits/stdc++.h>
using namespace std;
int main() {
    int findN;
    int result = 0;

    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    cin >> findN;
    int left = 0, right = 9;

    while(left <= right) {
        int mid = (left + right) / 2;
        if(A[mid] > findN) {
            right = mid - 1;
        }else if(A[mid] < findN) {
            left = mid + 1;
        }else {
            result = mid;
            break;
        }
    }

    cout << result << endl;
}