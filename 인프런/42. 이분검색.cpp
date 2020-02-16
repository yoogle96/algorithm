#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N, M, input, mid, lt, rt;
vector<int> v;
int main() {
    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    lt = 0;
    rt = v.size() - 1;
    while(lt <= rt) {
        mid = (lt + rt) / 2;
        if(v[mid] == M) {
            break;
        }else if(v[mid] < M) {
            lt = mid + 1;
        }else {
            rt = mid - 1;
        }
    }
    cout << mid+1;
}