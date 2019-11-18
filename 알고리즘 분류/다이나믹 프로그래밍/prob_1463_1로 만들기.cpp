#include <iostream>
using namespace std;

int DP[1000001];

int min(int a, int b){
    return a > b ? b : a;
}

int main(){
    int N;
    cin >> N;

    DP[1] = 0;
    for(int i = 2; i <= N; i++){
        DP[i] = DP[i - 1] + 1;
        if(i % 2 == 0){
            DP[i] = min(DP[i], DP[i / 2] + 1);
        }
        if(i % 3 == 0){
            DP[i] = min(DP[i], DP[i / 3] + 1);
        }
    }

    cout << DP[N];
}