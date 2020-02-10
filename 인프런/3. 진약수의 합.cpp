#include <iostream>
using namespace std;
int N, answer;
int main() {
    cin >> N;
    answer+=1;
    cout << 1;
    for(int i = 2; i < N; i++) {
        if(N % i == 0) {
            cout << " + " << i;
            answer += i;
        }
    }
    cout << " = " << answer;
}
