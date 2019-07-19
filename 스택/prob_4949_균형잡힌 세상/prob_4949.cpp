#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main(){
    string text, token, temp;
    bool flag;
    stack<string> s;
    while(1){
        getline(cin, text);
        if(text == ".") break;
        flag = true;
        for(int i = 0; i < text.size(); i++){
            token = text[i];
            if(token == "("){
                s.push(token);
            }else if(token == "["){
                s.push(token);
            }else if(token == ")"){
                if(s.empty() || s.top() != "("){
                    flag = false;
                    break;
                }
                s.pop();
            }else if(token == "]"){
                if(s.empty() || s.top() != "["){
                    flag = false;
                    break;
                }
                s.pop();
            }else{
                continue;
            }
        }
        if(flag != false && s.empty()){
            cout << "yes" << "\n";
        }else{
            cout << "no" << "\n";
        }
        while(!s.empty()) s.pop();
    }    
}