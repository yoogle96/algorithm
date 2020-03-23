#include <iostream>
#include <algorithm>

using namespace std;
int DP[501][501];
int arr[501][501];
int main(){
    int N;
    cin >> N;
    for(int i = 1 ; i <= N; i++){
        for(int j = 0; j < i; j++){
            cin >> arr[i][j];
        }
    }

    DP[1][0] = arr[1][0];
    for(int i = 2 ; i <= N; i++){
        for(int j = 0; j < i; j++){
            if(j == 0){
                DP[i][j] = DP[i-1][j] + arr[i][j];
            }else if(j == i-1){
                DP[i][j] = DP[i-1][j-1] + arr[i][j];
            }else{
                DP[i][j] = max(DP[i-1][j-1] ,DP[i-1][j]) + arr[i][j];
            }
        }
    }

    long long max = DP[N][0];
    for(int i = 1; i < N; i++){
        if(max < DP[N][i]) max = DP[N][i];
    }

    cout << max << endl;
}