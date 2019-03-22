#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    string input = "";
    stack<char> s;
    cin >> input;
    int result = 0;
    
    int len = input.length();
    
    for(int i = 0 ; i < len; i++){
        char token = input[i];
        if(token == '('){
            if(input[i+1] == ')'){
                if(!s.empty()){
                    result += s.size();
                    i+=1;
                    continue;
                }
                else{
                    i+=1;
                    continue;
                }
            }
            s.push(token);
        }
        
        if(token == ')'){
            s.pop();
            result+=1;
        }
    }
    
    cout << result << endl;
    return 0;
}
