#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int testCase, input;
    vector<int> v;

    cin >> testCase;
    for(int i = 0; i < testCase; i++){
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";
    }
}