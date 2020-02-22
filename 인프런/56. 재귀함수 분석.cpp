#include <iostream>
using namespace std;
int N;

void recur(int n) {
    if(n==0) return;
    recur(n-1);
    cout << n << " ";
}

int main() {
    cin >> N;
    recur(N);
}
