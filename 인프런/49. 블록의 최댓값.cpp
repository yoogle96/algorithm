#include <iostream>
#include <vector>
using namespace std;
int N, answer;
int main() {
    cin >> N;
    vector< vector<int> > v(N, vector<int>(N, 0));
    vector<int> fr(N);
    vector<int> rt(N);
    for(int i = 0; i < N; i++) cin >> fr[i];
    for(int i = 0; i < N; i++) cin >> rt[i];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(fr[i] <= rt[N-j-1]) answer += fr[i];
            else answer += rt[N-j-1];
        }
    }
    cout << answer;
}