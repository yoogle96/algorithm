#include <iostream>
#define mod 1000000000;

using namespace std;
long long DP[101][10];
long long ans;
int main(){
    int N;
    cin >> N;
    for(int i = 1; i <=9; i++){
        DP[1][i] = 1;
    }

    for(int i = 2; i <= N; i++){
        for(int j = 0; j <= 9; j++){
            if(j == 0){
                DP[i][0] = DP[i - 1][1] % mod;
            }else if(j == 9){
                DP[i][9] = DP[i - 1][8] % mod;
            }else{
                DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j + 1]) % mod;
            }
        }
    }

    for(int i = 0; i <= 9; i++){
        ans += DP[N][i];
    }

    ans %= mod;
    cout << ans << endl;
}