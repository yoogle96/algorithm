#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

stack<int> numStack;
stack<char> charStack;

void solution(string ecryptedString) {
    string answer = "";
    
    for(int i = 0 ; i < ecryptedString.length(); i++){
        if(isdigit(ecryptedString[i])){
            char token = ecryptedString[i];
            numStack.push(token - '0');
        }
        else if(ecryptedString[i] == '{'){
            charStack.push(ecryptedString[i]);
        }
        else if(ecryptedString[i] == '}'){
            if(charStack.empty()){
                int num = numStack.top(); numStack.pop();
                string tempString = answer;
                for(int i = 0; i < num; i++){
                    answer += tempString;
                }

                break;
            }
            int num = numStack.top(); numStack.pop();
            string tempString = "";
            string completeString = "";
            while(!charStack.empty()){
                if(charStack.top() == '{'){
                    charStack.pop(); break;
                }
                tempString += charStack.top(); charStack.pop();
                reverse(tempString.begin(), tempString.end());
            }
            
            if(charStack.empty()){
                answer = answer;
            }
            
            for(int k = 0; k < num; k++){
                completeString += tempString;
            }
            
            answer += completeString;
        }
        else{
            charStack.push(ecryptedString[i]);
        }
    }
    
    cout << answer << endl;
}

int main(){
    string ecryptedString = "2{3{ab}2{d}}";
    solution(ecryptedString);
}
