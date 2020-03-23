#include <iostream>
#include <string>
using namespace std;

string cro[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

int main(){
    string s;
    int ans = 0;
    cin >> s;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == 'c' && ( s.substr(i, 2) == cro[0] || s.substr(i, 2) == cro[1] )){
            ans++;
            i++;
            continue;
        }else if(s[i] == 'd' && (s.substr(i, 2) == cro[3] || s.substr(i, 3) == cro[2])){
           if(s.substr(i, 2) == cro[3]){
               ans++;
               i++;
           }else{
               ans++;
               i+=2;
           }
        }else if(s[i] == 'l' && s.substr(i, 2) == cro[4]){
            ans++;
            i++;
            continue;
        }else if(s[i] == 'n' && s.substr(i, 2) == cro[5]){
            ans++;
            i++;
            continue;
        }else if(s[i] == 's' && s.substr(i, 2) == cro[6]){
            ans++;
            i++;
            continue;
        }else if(s[i] == 'z' && s.substr(i, 2) == cro[7]){
            ans++;
            i++;
            continue;
        }else{
            ans++;
        }
    }
    cout << ans << endl;
}