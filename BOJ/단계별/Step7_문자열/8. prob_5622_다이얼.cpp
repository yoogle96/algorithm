#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int t = 0;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        int num;
        if(s[i] < 'D'){
            num = 1;

        }else if(s[i] < 'G'){
            num = 2;
        }else if(s[i] < 'J'){
            num = 3;
        }else if(s[i] < 'M'){
            num = 4;
        }else if(s[i] < 'P'){
            num = 5;
        }else if(s[i] < 'T'){
            num = 6;
        }else if(s[i] < 'W'){
            num = 7;
        }else{
            num = 8;
        }

        t += num + 2;
    }

    cout << t << endl;

}