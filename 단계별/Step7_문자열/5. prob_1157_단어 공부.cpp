#include <iostream>
#include <string>
int temp[90];
using namespace std;
int main(){
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a'){
            temp[(int)s[i] - 32]++;
        }else{
            temp[(int)s[i]]++;
        }
    }

    int max = 65, count = 0;
    for(int i = 66; i <= 90; i++){
        if(temp[max] < temp[i]){
            max = i;
        }
    }

    for(int i = 66; i <= 90; i++){
        if(temp[max] == temp[i]){
            if(max == i) continue;
            max=63;
        }
    }
    cout << char(max) << endl;
}