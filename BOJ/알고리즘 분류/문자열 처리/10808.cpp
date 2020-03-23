#include <iostream>
#include <string>

int arr[130];

using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        arr[(int)s[i]]++;
    }

    for(int i = 97; i < 123; i++){
        cout << arr[i] << " ";
    }
}