#include <bits/stdc++.h>
using namespace std;
bool ans = true;
int arr[2];
bool solution(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(auto t : s) {
        if(t == 'p') arr[0]++;
        if(t == 'y') arr[1]++;
    }
    if(arr[0] == arr[1]) ans = true;
    else ans = false;
    return ans;
}