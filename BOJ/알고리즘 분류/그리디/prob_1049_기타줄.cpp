#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v1;
vector<int> v2;

int main(){
    int N, M, num, ans = 0;
    cin >> N >> M;

    for(int i = 0 ; i < M; i++){
        int num;
        cin >> num;
        v1.push_back(num);
        cin >> num;
        v2.push_back(num);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    if(v1[0] <= (v2[0] * 6)){
        while(1){
            if(N >= 6){
                ans += v1[0];
                N-=6;
            }else{
                if(v1[0] <= v2[0] * N){
                    ans += v1[0];
                    N-=6;
                }else{
                    ans += v2[0];
                    N--;
                }
            }

            if(N <= 0) break; 
        }
    }else{
        while(N--){
            ans += v2[0];
        }
    }

    cout << ans << endl;
}