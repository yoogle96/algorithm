#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    int c;
    while(b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int lmc(int a, int b) {
    return (a * b / gcd(a, b));
}

int n, m;
int main() {
    cin >> n >> m;
    cout << gcd(n, m) << endl;
    cout << lmc(n, m) << endl;
}