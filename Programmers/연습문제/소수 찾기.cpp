#include <bits/stdc++.h>
using namespace std;
int ans, arr[1000001];
int solution(int n) {
    arr[1] = true;
    for(int i = 2; i <= sqrt(n); i++) {
        if(arr[i] == false) {
            for(int j = i + i; j <= n; j += i)  {
                arr[j] = true;
            }
        }
    }
    for(int i = 1; i <= n; i++) if(!arr[i]) ans++;
    return ans;
}