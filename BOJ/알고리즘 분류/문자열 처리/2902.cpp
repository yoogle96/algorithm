#include <iostream>
#include <string>
using namespace std;
string s, ans;
int main(){
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 65 && s[i] <= 90) ans+=s[i];
    }

    cout << ans;
}