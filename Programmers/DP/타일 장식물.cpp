#include <bits/stdc++.h>
using namespace std;
long long ans, arr[81];;
long long solution(int N) {
    arr[1] = 1; arr[2] = 1;
    for(int i = 3; i <= 81 + 1; i++) arr[i] = arr[i - 1] + arr[i - 2];
    long long width, heigh;
    if(N % 2 == 0) {
        heigh = arr[N + 1];
        width = arr[N];
    }else {
        heigh = arr[N];
        width = arr[N + 1];
    }
    ans = (width * 2) + (heigh * 2);
    return ans;
}

int main() {
    cout << solution(79) << endl;
}