#include <iostream>
#include <string>
using namespace std;
int arr1[130], arr2[130];
bool flag;
string s1, s2;
int main() {
    cin >> s1 >> s2;
    int len1 = s1.size(), len2 = s2.size();
    for(int i = 0; i < len1; i++) {
        char token1 = s1[i];
        char token2 = s2[i];
        arr1[token1]++;
        arr2[token2]++;
    }
    for(int i = 65; i <= 122; i++) {
        if(arr1[i] != arr2[i]) {
            flag = true;
            break;
        }
    }
    if(flag) cout << "NO";
    else cout << "YES";
}