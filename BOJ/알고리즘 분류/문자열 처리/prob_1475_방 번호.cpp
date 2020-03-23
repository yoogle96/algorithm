#include <iostream>
#include <string>

using namespace std;

int arr[10];

int main(){
    string N;
    cin >> N;

    for(int i = 0; i < N.length(); i++){
        char token = N.at(i);
        arr[atoi(&token)]++;
    }

    int min = arr[0];
    for(int i = 1; i < 10; i++){
        if(i == 9 || i == 6) continue;
        if(min < arr[i]) min = arr[i];
    }
    int check= arr[6] + arr[9];

    if(check%2 == 0) check /= 2;
    else{
        check /= 2;
        check++;
    } 

    if(min < check) min = check;
    cout << min << endl;
}