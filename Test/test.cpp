#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

string swap(string u){
    string swapS = "";
    for(int i = 0; i < u.length(); i++){
        if(u[i] == '(') swapS += ')';
        else{
            swapS += '(';
        }
    }
    
    return swapS;
}

int main(){
    string s = "))((()";
    s = swap(s);
    cout << s;
    // stack<char> s;
    // s.push_back()

}

// )(((

