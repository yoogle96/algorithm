#include <bits/stdc++.h>
using namespace std;
string ans;
char arr[3] = {'4', '1', '2'};
string solution(int n) {
    while(n) {
        int mod = n % 3;
        n = n / 3;
        ans = arr[mod] + ans;
        if(mod == 0) n -= 1;
    }
    return ans;
}