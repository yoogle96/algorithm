#include <iostream>
#include <string>
using namespace std;
int token[200] = {0, };
int main(){
    int n;
    bool flag = true;
    string s;
    for(int i = 0; i < n; i++){
        cin >> s;
        for(int j = 0; j < s.length(); j++){
            if(token[(int)s[j]] < 1){
                token[(int)s[j]]++;
            }else{
                if(s[j-1] != s[j]){
                    flag = false;
                }
            }
            
        }
    }
}
