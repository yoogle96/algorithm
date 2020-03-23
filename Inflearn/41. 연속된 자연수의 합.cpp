#include <iostream>
#include <vector>
using namespace std;
int N, mok, cnt;
bool flag;
vector<int> v;
int main() {
    cin >> N;
    for(int i = 0; i < N/2; i++) {
        mok = (N/2) - i;
        int sum = 0;
        flag = false;
        while(1) {
            v.push_back(mok);
            sum += mok++;
            if(sum == N) {
                flag = true;
                break;
            }
            if(sum > N) break;
        }
        if(flag) {
            for(int i = 0; i < v.size() - 1; i++) {
                cout << v[i] << " + ";
            }
            cout << v[v.size() - 1] << " = " << N << endl;
            cnt++;
        }
        v.clear();
    }
    cout << cnt;
}