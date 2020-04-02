#include <bits/stdc++.h>
using namespace std;
vector<string> answer;
vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    for(int i = 0; i < n; i++) {
        int t = arr1[i] | arr2[i];
        string token;
         for (int i = n - 1; i >= 0; i--) {
             int bnr (t >> i & 1 ? 1 : 0);
             if(bnr) token += "#";
             else token += " ";
         }
         answer.push_back(token);
    }
    return answer;
}
int main() {
    solution(5, {9, 20, 28, 18, 11}, {30, 1, 21, 17, 28});
}