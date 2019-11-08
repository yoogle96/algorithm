#include <iostream>
#include <string>
int arr[10];
using namespace std;
int main(){
    int num1, num2, num3, result;
    char token;
    cin >> num1 >> num2 >> num3;
    result = num1 * num2 * num3;
    string resultString = to_string(result);
    for(int i = 0; i < resultString.size(); i++){
        token = resultString[i];
        arr[stoi(&token)]++;
    }
    for(int i = 0; i < 10; i++){
        cout << arr[i] << endl;
    }
}