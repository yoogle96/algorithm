#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main(){
        ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

        string input;
        char token;
        int temp = 1;
        int result = 0;

        stack<char> s;
        cin >> input;

        for(int i = 0; i < input.length(); i++){
                token = input[i];
                if(token == '('){
                        s.push(token);
                        temp *= 2;
                }else if(token == '['){
                        s.push(token);
                        temp *= 3;
                }else if(token == ')'){
                        if(s.empty() || s.top() != '('){
                                cout << 0;
                                return 0;
                        }
                        if(input[i-1] == '('){
                                result += temp;
                        }
                        s.pop();
                        temp/=2;
                }else if(token == ']'){
                        if(s.empty() || s.top() != '['){
                                cout << 0;
                                return 0;
                        }
                        if(input[i-1] == '['){
                                result += temp;
                        }
                        s.pop();
                        temp/=3;
                }else{
                        cout << 0;
                }
        }
        if(!s.empty()){
                cout << 0;
                return 0;
        }

        cout << result;
        return 0;
}