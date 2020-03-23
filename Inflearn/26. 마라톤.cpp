#include <iostream>
#include <vector>
using namespace std;
vector< pair<int, int> > v;
int N, input;;
int main() {
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> input;
        v.push_back(make_pair(input, i + 1));
        for(int j = i-1; j >= 0; j--) {
            if(v[i].first > v[j].first) {
                v[i].second--;
            }
        }
    }
    for(int i = 0; i < v.size(); i++) {
        cout << v[i].second << " ";
    }
}