#include <iostream>
using namespace std;
int A, B, answer;
int main() {
    cin >> A >> B;
    for(int i = A; i < B; i++) {
        cout << i << " + ";
        answer += i;
    }
    answer += B;
    cout << B << " = " << answer;
}