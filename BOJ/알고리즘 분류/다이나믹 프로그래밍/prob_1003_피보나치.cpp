#include <iostream>

using namespace std;

int arr[41][2];

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T, N;
    cin >> T;

    arr[0][0] = 1; arr[0][1] = 0;
    arr[1][0] = 0; arr[1][1] = 1;
    arr[2][0] = 1; arr[2][1] = 1;

    while(T--){
        cin >> N;
        for(int i = 3; i <= N; i++){
            arr[i][0] = arr[i-1][0] + arr[i-2][0];
            arr[i][1] = arr[i-1][1] + arr[i-2][1];
        }

        cout << arr[N][0] << " " << arr[N][1] << "\n";
    }

}