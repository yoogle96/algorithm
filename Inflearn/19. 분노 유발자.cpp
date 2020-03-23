#include <iostream>
#include <vector>
using namespace std;
int N, input, answer;
vector<int> v;
int main() {
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> input;
        v.push_back(input);
    }
    int max = v[N - 1];
    for(int i = N - 1; i >= 0; i--) {
        if(max < v[i]) {
            answer++;
            max = v[i];
        }
    }

    cout << answer;
}