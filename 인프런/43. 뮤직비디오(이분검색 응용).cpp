#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, M, lt, rt, mid, cnt, answer;
bool flag;
int main() {
    cin >> N >> M;
    vector<int> v(N);
    for(int i = 0; i < N; i++) {
        cin >> v[i];
        rt += v[i];
    }
    lt = 1;
    while(lt <= rt) {
        mid = (lt + rt) / 2;
        flag = true;
        int sum = 0;
        cnt = 1;
        for(int j = 0; j < v.size(); j++) {
            if(v[j] > mid) {
                flag = false;
                break;
            }
            sum += v[j];
            if(sum + v[j+1] > mid) {
                sum = 0;
                cnt++;
            }
            if(cnt > M) {
                flag = false;
                break;
            }
        }
        if(flag) {
            rt = mid - 1;
            answer = mid;
        }else {
            lt = mid + 1;
        }
    }
    cout << answer;
}