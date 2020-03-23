#include <iostream>
double arr[1001] = {0.0,};
using namespace std;
int main(){
    int testCase;
    double max, total = 0;
    cin >> testCase >> arr[0];
    max = arr[0];
    for(int i = 1; i < testCase; i++){
        cin >> arr[i];
        if(arr[i] > max) max = arr[i];
    }
    for(int i = 0; i < testCase; i++){
        arr[i] = arr[i]/max*100;
        total += arr[i];
    }
    cout << total/testCase;
}