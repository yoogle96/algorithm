#include <iostream>
using namespace std;
int N, input;

int reverse(int x) {
    int res = 0, temp = 0;
    while(x > 0) {
        temp = x % 10;
        res = res * 10 + temp;
        x /= 10;
    }

    return res;          
}

bool isPrime(int x) {
    if(x == 1) return false;
    for(int i = 2; i < x; i++) {
        if(x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cin >> N;
    while(N--) {
        cin >> input;
        int reNum = reverse(input);
        if(isPrime(reNum)) cout << reNum << " ";
    }
}