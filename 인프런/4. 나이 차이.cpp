#include <iostream>
#include <vector>
using namespace std;
int N, input, maxx, minn;
vector<int> v;
int main() {
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> input;
        v.push_back(input);
    }
    maxx = v[0], minn = v[0];
    for(int i = 1; i < N; i++) {
        if(maxx < v[i]){
            maxx = v[i];
        } 
        if(minn > v[i]){
            minn = v[i];
        }
    }
    cout << maxx - minn;
}