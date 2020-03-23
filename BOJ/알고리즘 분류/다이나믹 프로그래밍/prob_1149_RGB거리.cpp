#include <iostream>
#include <algorithm>

using namespace std;

int home[1001][3], DP[1001][3], ans;

int main(){
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++){
        for(int j = 0 ; j < 3; j++){
            cin >> home[i][j];
        }
    }

    DP[0][0] = DP[0][1] = DP[0][2] = home[0][0] = home[0][1] = home[0][2] = 0;

    for(int i = 1; i <= N; i++){
        DP[i][0] = min(DP[i-1][1], DP[i-1][2]) + home[i][0];
        DP[i][1] = min(DP[i-1][0], DP[i-1][2]) + home[i][1];
        DP[i][2] = min(DP[i-1][0], DP[i-1][1]) + home[i][2];
    }

    cout << min(DP[N][0], min(DP[N][1], DP[N][2]));
}
