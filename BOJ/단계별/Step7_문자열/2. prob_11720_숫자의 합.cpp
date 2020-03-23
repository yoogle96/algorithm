#include <iostream>
#include <string>

using namespace std;
int main(){
    int n, total = 0;
    string num;
    cin >> n >> num;
    for(int i = 0; i < num.length(); i++){
        char token = num.at(i);
        total += token - '0';
    }
    cout << total;
}