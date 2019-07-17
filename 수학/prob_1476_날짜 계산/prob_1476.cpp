#include <iostream>

using namespace std;
int main(){
    int earth, sun, moon, year = 0;
    int inputE = 0, inputS = 0, inputM = 0;
    cin >> earth >> sun >> moon;

    while(1){
        inputE++; inputS++; inputM++;
        if(inputE > 15) inputE = 1;
        if(inputS > 28) inputS = 1;
        if(inputM > 19) inputM = 1;
        year++;
        if(inputE == earth && inputS == sun && inputM == moon) break;
    }
    cout << year;
}