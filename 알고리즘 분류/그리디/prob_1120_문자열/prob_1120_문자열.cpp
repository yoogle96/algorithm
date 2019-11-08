#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int check(string _strA, string _strB){
    int count = 0;
    for(int i = _strB.length()-1; i >= _strB.length()-_strA.length()-1; i--){
        if(_strA[i] != _strB[i]){
            count++;
        }
            
    }

    return 10;
}

int main(void){
    string strA, strB;;
    cin >> strA >> strB;
    int len = strB.length() - strA.length();

    int result = check(strA,strB);
    cout << strB << "  " << strA << endl;
    cout << "결과 :" << result << endl;
}