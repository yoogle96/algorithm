#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> a, b, answer;
int N, M, input, pA, pB;
int main() {
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> input;
        a.push_back(input);
    }
    cin >> M;
    for(int i = 0; i < M; i++) {
        cin >> input;
        b.push_back(input);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    while(pA < N && pB < M) {
        if(a[pA] != b[pB]) {
            a[pA] < b[pB] ? pA++ : pB++;
        }else {
            answer.push_back(a[pA]);
            pA++; pB++;
        }
    }

    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
}
