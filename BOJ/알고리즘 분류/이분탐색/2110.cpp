#include <bits/stdc++.h>
using namespace std;
int n, c;
vector<int> v;
int main() {
    cin >> n >> c;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    int left = -1;
    int right = v[n - 1] - v[0];
    int d = 0;
    int ans = 0;

    while (left <= right) {
        int mid = (left + right) / 2;
        int start = v[0];
        int cnt = 1;

        for (int i = 1; i < n; i++) {
            d = v[i] - start;
            if (mid <= d) {
                cnt++;
                start = v[i];
            }
        }

        if (cnt >= c) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    cout << ans << endl;
}