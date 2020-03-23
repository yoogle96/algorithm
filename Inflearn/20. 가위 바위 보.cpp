#include <iostream>
#include <vector>
using namespace std;
int N, input;
vector<int> v[2];
int main() {
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> input;
        v[0].push_back(input);
    }
    for(int i = 0; i < N; i++) {
        cin >> input;
        v[1].push_back(input);
    }
    for(int i = 0; i < N; i++) {
        int res = v[0][i] - v[1][i];
        if(res == -2 || res == 1 || res == 1) {
            cout << "A" << endl;
        }else if(res == -1 || res == 2) {
            cout << "B" << endl;
        }else {
            cout << "D" << endl;
        }
    }
}