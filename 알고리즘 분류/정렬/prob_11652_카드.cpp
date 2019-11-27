#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<long long, int> m;

int main(){
    int N;
    long long num;

    cin >> N;

    for(int i = 0 ; i < N; i++){
        cin >> num;
        m[num] += 1;
    }

    long long ans;
    int cnt = 0;

    for(auto p : m){
        if(cnt < p.second){
            ans = p.first;
            cnt = p.second;
        }else if(cnt == p.second && ans > p.first){
            ans = p.first;
        }
    }

    cout << ans << endl;
}