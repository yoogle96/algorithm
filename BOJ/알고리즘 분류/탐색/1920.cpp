#include <bits/stdc++.h>
using namespace std;
int n, m, num;
set <long long> mySet;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n;
    while(n--) {
        cin >> num;
        mySet.insert(num);
    }
    cin >> m;
    while(m--) {
        cin >> num;
        if(mySet.count(num)) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
}