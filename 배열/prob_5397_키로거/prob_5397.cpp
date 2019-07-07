#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<char> result, temp;
    string input, output;
    int testCase;
    char token;

    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        output.clear();
        cin >> input;

        for(int j = 0; j < input.size(); j++){
            token = input[j];
            switch (token){
                case '<':
                    if(!result.empty()){
                        temp.push(result.top());
                        result.pop();
                        break;
                    }else{
                        break;
                    }

                case '>':
                    if(!temp.empty()){
                        result.push(temp.top());
                        temp.pop();
                        break;
                    }else{
                        break;
                    }

                case '-':{
                    if(!result.empty()){
                        result.pop();
                        break;
                    }else{
                        break;
                    }
                }   
                
                default:
                    result.push(token);
            }
        }

        while(!temp.empty()){
            result.push(temp.top());
            temp.pop();
        }

        while(!result.empty()){
            output += result.top();
            result.pop();
        }
        reverse(output.begin(), output.end());
        cout << output << "\n";
    }
    return 0;
}