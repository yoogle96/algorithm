#include <bits/stdc++.h>
using namespace std;
long long n, m, ans;
vector<long long> woods;
int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        long long tmp = 0;
        cin >> tmp;
        woods.push_back(tmp);
    }
    sort(woods.begin(), woods.end());
    long long left = 0;
    long long right = woods[n-1];
    while(left <= right) {
        long long mid = (left + right) / 2;
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            if(woods[i] <= mid) continue;
            sum += woods[i] - mid;
        }
        
        if(sum < m) {
            right = mid - 1;
        }else {
            if(ans < mid) {
                ans = mid;
            }
            left = mid + 1;
        }
    }
    cout << ans << endl;
}