#include <iostream>
int arr[10];
using namespace std;
int main(){
    int inputNum, max, count = 1;

    cin >> inputNum;
    max = inputNum;
    for(int i = 1; i < 9; i++){
        cin >> inputNum;
        if(inputNum > max){
            max = inputNum;
            count = i+1;
        }
    }
    cout << max << "\n";
    cout << count << "\n";
}