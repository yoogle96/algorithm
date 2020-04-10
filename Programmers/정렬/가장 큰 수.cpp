#include <bits/stdc++.h>
using namespace std;
string ans;
bool cmp(int a, int b) {
    if(a == b) return false;
    int aSz, bSz;
    for(aSz = 1000; aSz >= 1; aSz/=10) if(a / aSz >= 1) break;
    for(bSz = 1000; bSz >= 1; bSz/=10) if(b / bSz >= 1) break;
    
    int na1 = -1, na2 = -1;
    while(1) {
        if(aSz == 1) aSz = 0;
        if(bSz == 1) bSz = 0;
        if(aSz == 0 && bSz == 0) break;
        if(aSz) {
            na1 = a % aSz;
            a /= aSz;
            aSz /= 10;
        }
        if(bSz) {
            na2 = b % bSz;
            b /= bSz;
            bSz /= 10;
        }
        if(a != b) break;
        else {
            if(na1 == na2) break;
            if(aSz) a = na1;
            if(bSz) b = na2;
        }
    }
    return a > b;
}
string solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end(), cmp);
    for(auto t : numbers) {
        string tkn = to_string(t);
        ans += tkn;
    }   
    return ans;
}

int main() {
    cout << solution({40,403}) << endl;
}
// [40,403 ]
// [40,405]
// [40,404]
// [12,121]
// [2,22,223]
// [21,212]
// [41,415]
// [2,22 ]
// [70,0,0,0]
// [0,0,0,0]
// [0,0,0,1000]
// [12,1213]