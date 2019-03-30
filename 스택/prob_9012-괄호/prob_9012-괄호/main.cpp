#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main(void) {
    string inputTest = "";
    int testCase = 0;
    cin >> testCase;
    
    for(int i = 0; i < testCase; i++){
        stack<char> s;
        cin >> inputTest;
        int j;
        if(inputTest.length() % 2 != 0){
            cout << "NO" << endl;
            continue;
        }
        for(j = 0; j < inputTest.length(); j++){
            char token = inputTest[j];
            
            if(token == '('){
                s.push(token);
            }
            else if(token == ')'){
                if(s.empty()){
                    break;
                }
                else{
                    s.pop();
                }
            }
        }
        if(j == inputTest.length() && s.empty()){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
