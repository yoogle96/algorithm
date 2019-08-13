#include <iostream>
#include <deque>
#include <string>
using namespace std;
int main(){
    int testCase, n, count;
    bool flag, point;
    string command, arr, checkNum, output;
    deque<int> q;
    cin >> testCase;
    for(int i = 0 ; i < testCase; i++){
        output = "[]";
        checkNum = "";
        count = 0;
        point = true;
        flag = true;
        cin >> command >> n;
        cin >> arr;
        if(n > 0){
            for(int j = 1; j < arr.size(); j++){
                if(isdigit(arr[j])){
                    checkNum += arr[j];
                }else{
                    q.push_back(stoi(checkNum));
                    checkNum = "";
                }    
            }
        }
        
        for(int k = 0; k < command.size(); k++){
            if(command[k] == 'R'){
                if(n == 0) break;
                count++;
                if(count % 2 != 0){
                    point = false;
                }else{
                    point = true;
                }                
            }else{
                if(q.empty()){
                    flag = false;
                    break;
                }
                (point ? q.pop_front() :  q.pop_back());
            }
        }

        if(flag == true){
            if(n > 0 && !q.empty()){
                output.insert(1, to_string(point ? q.back() : q.front()));
                point ? q.pop_back() : q.pop_front();

                while(!q.empty()){
                    output.insert(1, to_string(point ? q.back() : q.front())+",");
                    point ? q.pop_back() : q.pop_front();
                }
            }
            cout << output << "\n";
            
        }else{
            cout << "error" << '\n';
        }   
    }
}