#include <bits/stdc++.h>
using namespace std;
int n, m;
long long num;
int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    set<long long> mySet;
    cin >> n;
    while(n--) {
        cin >> num;
        mySet.insert(num);
    }
    cin >> m;
    while(m--) {
        cin >> num;
        if(mySet.count(num)) cout << 1 << " ";
        else cout << 0 << " ";
    }
}