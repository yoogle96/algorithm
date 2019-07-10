#include <iostream>

int arr[10001] = {0, };

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testCase, input;
    cin >> testCase;
    for(int i = 0; i < testCase; i++){
        cin >> input;
        arr[input]++;
    }
    
    for(int i = 0; i <= 10000; i++){
        while(arr[i] > 0){
            cout << i << "\n";
            arr[i]--;
        }
    }
    return 0;
}