#include <iostream>
#include <string>
using namespace std;

string s[51], ans;
int N;
int main(){
    cin >> N;
    for(int i = 0 ; i < N; i++){
        cin >> s[i];
    }

    int len = s[0].size();
    for(int i = 0; i < len; i++){
        bool check = true;
        for(int j = 0; j < N-1; j++){
            if(s[j][i] != s[j+1][i]) check = false;
        }
        if(check) ans+= s[0][i];
        else{
            ans+='?';
        }
    }

    cout << ans;
}