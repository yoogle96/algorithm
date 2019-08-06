#include <iostream>
#include <string>
using namespace std;
int main(){
    char token;
    string inputString;
    int testCase, score, total;
    cin >> testCase;
    for(int i = 0; i < testCase; i++){
        cin >> inputString;

        score = 0, total = 0;
        for(int j = 0 ; j < inputString.size(); j++){
            token = inputString[j];
            if(token == 'O'){
                score++;
                total += score;
            }
            if(token == 'X'){
                score = 0;
            }
        }
        cout << total << "\n";
    }
}