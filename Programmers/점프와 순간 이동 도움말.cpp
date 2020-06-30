#include <bits/stdc++.h>
using namespace std;
int ans = 1;
int solution(int n) {
    int dist = n;
    while(dist > 1) {
        if(dist % 2 == 0) {
            dist /= 2;
        }else {
            dist--;
            ans++;
        }
    }
    return ans;
}