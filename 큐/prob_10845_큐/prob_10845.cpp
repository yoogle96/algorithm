#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(){
    int testCase;
    string command;
    queue<int> q;
    cin >> testCase;
    cin.ignore(1000, '\n');
    for(int i = 0; i < testCase; i++){
        getline(cin, command);
        if(command == "pop"){
            if(!q.empty()){
                cout << q.front() << "\n";
                q.pop();
            }else{
                cout << "-1" << "\n";
            }
        }
        else if(command == "size"){
            cout << q.size() << "\n";
        }
        else if(command == "empty"){
            if(!q.empty()) cout << "0" << "\n";
            else cout << "1" << "\n";
        }
        else if(command == "front"){
            if(!q.empty()){
                cout << q.front() << "\n";
            }else{  
                cout << "-1" << "\n";
            }
        }
        else if(command == "back"){
            if(!q.empty()){
                cout << q.back() << "\n";
            }else{
                cout << "-1" << "\n";
            }
        }
        else{
            int num = stoi(&command[5]);
            q.push(num);
        }
    }
}