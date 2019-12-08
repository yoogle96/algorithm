#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

string arr[500001], brr[500001];
map<string, int> m;

vector<string> v;

int N, M;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
        m.insert(pair<string, int>(arr[i], 1));
    }

    for(int i = 0; i < M; i++){
        cin >> brr[i];
        if(m.count(brr[i])){
            v.push_back(brr[i]);
        }
    }
    
    sort(v.begin(), v.end());

    cout << v.size() << "\n";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";
    }
}