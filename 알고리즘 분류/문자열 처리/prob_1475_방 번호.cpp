#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int arr[10], ans;

int main(){
    string N;
    cin >> N;

    for(int i = 0; i < N.length(); i++){
        char token = N.at(i);
        arr[atoi(&token)]++;
    }

    ans = arr[0];

    for(int i = 1 ; i <= 9; i++){
        if(ans < arr[i]){
            ans = arr[i];
        }
    }

    int temp = (arr[6] + arr[9]) / 2;
    ans -= temp;

    cout << ans << endl;
}