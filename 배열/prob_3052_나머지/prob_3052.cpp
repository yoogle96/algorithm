#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v(10);
    vector<int> mod;

    for(int i = 0; i < 10; i++){
        cin >> v[i];
        mod.push_back(v[i] % 42);
    }

    sort(mod.begin(), mod.end());
    mod.erase(unique(mod.begin(), mod.end()), mod.end());

    cout << mod.size();
    return 0;
}