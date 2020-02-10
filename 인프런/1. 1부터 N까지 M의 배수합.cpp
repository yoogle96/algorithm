#include <iostream>
using namespace std;
int N, M, answer;
int main() {
    cin >> N >> M;
    for(int i = 1; i <= N; i++) {
        if(i % M == 0) answer += i;
    }
    cout << answer;
}