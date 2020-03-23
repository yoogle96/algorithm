#include <iostream>

using namespace std;
int DP[100001];
int arr[100001];


int main(){
    int N;
    int max;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> arr[i];
    }

    for(int i = 1; i <= N; i++){
        if(DP[i - 1] + arr[i] > arr[i]){
            DP[i] = DP[i - 1] + arr[i];
        }else{
            DP[i] = arr[i];
        }
    }

    max = DP[1];
    for(int i = 2; i <= N; i++){
        if(DP[i] > max){
            max = DP[i];
        }
    }

    cout << max << endl;
}