#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    string input, tokenFirst, tokenSecond, temp, result;
    int count = 0;
    cin >> input;
    if(input.length() <= 1) input.append("0");
    result = input;
    
    while(1){
        tokenFirst = input[0];
        tokenSecond = input[1];
        temp = to_string(stoi(tokenFirst) + stoi(tokenSecond));
        if(temp.length() > 1) temp = temp[1];
        input = input[1] + temp;
        count++;
        if(result == input) break;
    }

    cout << count << endl;

}