#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool arr[1001];
int S, N, input, cnt;
int main() {
    cin >> S >> N;
    vector<int> v(S);
    for(int i = 0; i < N; i++) {
        cin >> input;
        if(arr[input]) {
            int j, k, temp;
            for(j = 0; j < S; j++) if(v[j] == input) break;
            temp = v[j];
            for(k = j; k < S - 1; k++) {
                if(v[k + 1] == 0) break;
                v[k] = v[k + 1];
            }
            v[k] = temp;
        }else {
            if(cnt == S) {
                arr[v[0]] = false;
                for(int t = 0; t < S - 1; t++) v[t] = v[t+1];
                v[S-1] = input; 
                arr[input] = true;
            }else {
                v[cnt] = input;
                arr[input] = true;
                cnt++;
            }
        }
    }
    reverse(v.begin(), v.end());
    for(int i = 0; i < S; i++) {
        cout << v[i] << " ";
    }
}