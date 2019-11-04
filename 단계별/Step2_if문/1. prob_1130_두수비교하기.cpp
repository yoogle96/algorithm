#include <iostream>

using namespace std;

int main(){
    int a, b;
    string result = "==";
    cin >> a >> b;

    if(a != b){
        result = a < b ? "<" : ">";
    }
    cout << result; 
    
}