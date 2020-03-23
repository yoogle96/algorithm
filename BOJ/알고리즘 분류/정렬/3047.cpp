#include <iostream>
#include <string>
#include <algorithm>
#include <map>


using namespace std;

int arr[3];
char temp[3];
map<char, int> m;


int main(){
    string abc;
    for(int i = 0 ; i < 3; i++){
        cin >> arr[i];
    }

    cin >> abc;
    for(int i = 0 ; i < 3; i++){
        temp[i] = abc[i];
    }

    sort(arr, arr+3);
    sort(temp, temp+3);

    for(int i = 0; i < 3; i++){
        m.insert(pair<char, int>(temp[i], arr[i]));
    }

    for(int i = 0 ; i < 3; i++){
        cout << m.find(abc[i]) -> second << endl;
    }
}