#include <iostream>
#include <vector>
using namespace std;
vector< pair<int, int> > v;
int N, input;
int main() {
    cin >> N;
    cin >> input;
    v.push_back(make_pair(input, 1));
    for(int i = 1; i < N; i++) {
        cin >> input;
        int temp = 1;
        for(int j = 0; j < v.size(); j++) {
            if(v[j].first < input) v[j].second++;
            else if(v[j].first == input) continue;
            else temp++;
        }
        v.push_back(make_pair(input, temp));
    }

    for(int i = 0 ; i < v.size(); i++) {
        cout << v[i].second << " ";
    }
}