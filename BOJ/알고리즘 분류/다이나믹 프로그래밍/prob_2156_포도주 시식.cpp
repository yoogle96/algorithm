#include <iostream>

using namespace std;
long long DP[10001];
int grape[10001];

int Max(int a, int b, int c){
    if(a < c){
        if(b > c) return b;
        else return c;
    }else{
        if(a > b) return a;
        else return b;
    }
}

int main(){
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> grape[i];
    }

    DP[1] = grape[1];
    DP[2] = DP[1] + grape[2];

    for(int i = 3; i <= N; i++){
        DP[i] = Max(DP[i - 3] + grape[i - 1] + grape[i], DP[i - 1], DP[i - 2] + grape[i]);
    }

    cout << DP[N] << endl;

}