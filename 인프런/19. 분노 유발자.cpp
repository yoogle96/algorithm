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
    for(int i = 0; i < N - 1; i++) {
        bool flag = true;
        for(int j = i + 1; j < N; j++) {
            if(v[i] <= v[j]) {
                flag = false;
                break;
            }
        }   
        if(flag) answer++;
    }
    cout << answer;
}