#include <iostream>
#include <string>
using namespace std;
int main(){
    int n, cnt=0;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;

        bool flag = true;
        int token[200] = {0, };
        for(int j = 0; j < s.length(); j++){
            if(token[(int)s[j]] < 1){
                token[(int)s[j]]++;
            }else{
                if(s[j-1] != s[j]){
                    flag = false;
                }
            }
        }
        if(flag) cnt++;
    }

    cout << cnt << endl;
}
