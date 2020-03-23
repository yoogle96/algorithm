#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, M, lt, rt, mid, answer;
int main() {
    cin >> N >> M;
    vector<int> v(N);
    for(int i = 0; i < N; i++) cin >> v[i];
    sort(v.begin(), v.end());

    lt = v[0];
    rt = v[N-1];
    while(lt <= rt) {
        mid = (lt + rt) / 2;
        int cnt = 1;
        int tempLt = 0;
        for(int i = 1; i < N; i++) {
            if(v[i] - v[tempLt] >= mid) {
                tempLt = i;
                cnt++;
            }
        }
        if(cnt >= M) {
            lt = mid + 1;
            answer = mid;
        }else {
            rt = mid - 1;
        }
    }
    cout << answer;
}