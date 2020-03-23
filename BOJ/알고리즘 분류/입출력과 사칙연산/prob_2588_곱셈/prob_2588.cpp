#include <iostream>
#include <string>
using namespace std;
int main(){
    string num1, num2;
    cin >> num1 >> num2;
    for(int i = 2; i >= 0; i--){
        char token = num2[i];
        cout << stoi(&token) * stoi(num1) << endl;
    }
    cout << stoi(num1) * stoi(num2) << endl;
}