#include <iostream>
#include <string>

using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
    
    string input, temp;
    int result = 0;
    bool flag = false;

    cin >> input;
    for(int i = 0; i <= input.size(); i ++){
        if(isdigit(input[i]) == false || i == input.size()){
            if(flag){
                result -= stoi(temp);
            }else{
                result += stoi(temp);
            }
            temp="";

            if(input[i] == '-'){
                flag = true;
                continue;
            }
        }else{
            temp += input[i];
        }   
    }
    
    cout << result;
    return 0;
}

