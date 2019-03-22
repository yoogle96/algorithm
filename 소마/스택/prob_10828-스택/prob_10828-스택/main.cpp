#include <iostream>
#include <stack>

using namespace std;

int main() {
    int testCase = 0;
    cin >> testCase;
    stack<int> s;
    for(int i = 0; i < testCase; i++){
        string op;
        cin >> op;
        int inputNum = 0;
        
        if(op == "push"){
            cin >> inputNum;
            s.push(inputNum);
        }
        
        else if(op == "pop"){
            if(!s.empty()){
                cout << s.top() << endl;
                s.pop();
            }
            else{
                cout << -1 << endl;
            }
        }
        
        else if(op == "top"){
            if(!s.empty()){
                cout << s.top() << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
        
        else if(op == "size"){
            cout << s.size() << endl;
        }
        
        else if(op == "empty"){
            if(s.empty() == true){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
        else{
            cout << "Input Error";
            return 0;
        }
    }
    
    return 0;
}
