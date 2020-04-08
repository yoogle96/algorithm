#include <bits/stdc++.h>
using namespace std;
int ans, arr[201];

int find(int a) {
    if(a == arr[a]) return a;
    else return arr[a] = find(arr[a]);
}

void munion(int a, int b) {
    int x = find(a);
    int y = find(b);
    arr[y] = x;
}

int solution(int n, vector<vector<int>> computers) {
    for(int i = 1; i <= n; i++) arr[i] = i;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            if(computers[i][j] == 1) munion(i + 1, j + 1);
        }
    }
    set<int> s;
    for(int i = 1; i <= n; i++) {
        s.insert(find(arr[i]));
    }
    ans = s.size();
    return ans;
}