#include <bits/stdc++.h>
using namespace std;
int n, m;
long long num;
int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    map<long long, int> myMap;
    cin >> n;
    while(n--) {
        cin >> num;
        myMap[num]++;
    }
    cin >> m;
    while(m--) {
        cin >> num;
        if(myMap.count(num)) cout << myMap[num] << " ";
        else cout << 0 << " ";
    }
}