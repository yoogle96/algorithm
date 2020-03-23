#include <iostream>
using namespace std;
int N;

void recur(int n) {
    if(n == 0) return;
    recur(n/2);
    cout << n % 2;
}

int main() {
    cin >> N;
    recur(N);
}