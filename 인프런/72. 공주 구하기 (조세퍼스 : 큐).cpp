#include <iostream>
#include <queue>
using namespace std;
int N, K, answer;
queue<int> q;
int main() {
    cin >> N >> K;
    for(int i = 1 ; i <= N; i++) q.push(i);
    while(1) {
        for(int i = 0; i < K - 1; i++) {
            answer = q.front();
            q.pop();
            q.push(answer);
        }
        answer = q.front();
        q.pop();       
        if(q.empty()) break;
    }

    cout << answer;
}