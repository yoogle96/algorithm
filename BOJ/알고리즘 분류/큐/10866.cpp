#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(){
    int testCase, inputNum;
    string command;
    deque<int> q;
    cin >> testCase;
    // cin.ignore(1000, '\n');
    for(int i = 0; i < testCase; i++){
        cin >> command;
        // getline(cin, command);
        if(command == "push_front"){
            cin >> inputNum;
            q.push_front(inputNum);
        }
        else if(command == "push_back"){
            cin >> inputNum;
            q.push_back(inputNum);

        }
        else if(command == "pop_front"){
            if(!q.empty()){
                cout << q.front() << "\n";
                q.pop_front();
            }else{
                cout << "-1" << "\n";
            }
        }
        else if(command == "pop_back"){
            if(!q.empty()){
                cout << q.back() << "\n";
                q.pop_back();
            }else{
                cout << "-1" << "\n";
            }
        }
        else if(command == "size"){
            cout << q.size() << "\n";
        }
        else if(command == "empty"){
            if(q.empty()) cout << "1" << "\n";
            else cout << "0" << "\n";
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
    }
}