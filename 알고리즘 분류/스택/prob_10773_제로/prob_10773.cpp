#include <iostream>
#include <stack>

using namespace std;
int main(){
    int testCase, inputNum, result = 0;
    stack<int> s;
    cin >> testCase;
    for(int i = 0; i < testCase; i++){
        cin >> inputNum;
        if(inputNum == 0){
            result -= s.top();
            s.pop();
        }else{
            result += inputNum;
            s.push(inputNum);
        }
    }
    cout << result;
}