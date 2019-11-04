#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

bool isBalance(string u){
    if(u.length() < 2) return false;
    
    char token;
    int open = 0;
    int close = 0;
    for(int i = 0 ; i < u.length(); i++){
        token = u[i];
        if(token == '(') open++;
        if(token == ')') close++;
    }
    
    // 균형잡힌 괄호면 true 리턴
    return open == close ;
}

bool isComplete(string u){
    char token;
    stack<char> s;
    for(int i = 0 ; i < u.length(); i++){
        token = u[i];
        if(token == '('){
            s.push(token);
        }else{
            if(s.empty()){
                return false;
            }else{
                s.pop();
            }
        }
    }
    
    return s.empty();
}

string reverce(string u, string v){
    string reverse = "(";
    reverse += v;
    reverse += ")";
    u.erase(0, u.front());
    u.erase(u.length(), u.back());
    char token;
    for(int i = 0 ; i < u.length(); i++){
        token = u[i];
        if(token == '(') u[i] = ')';
        if(token == ')') u[i] = '(';
    }

    reverse += u;
    
    return reverse;
}

string recursive(string p){
    if(isComplete(p)){
        return p;
    }
    
    char token;
    string u = "";
    string v = "";
    int point = 0;
    while(!isBalance(u)){
        u += p[point];
        point++;
    }
    v = p.substr(point, p.length());

    cout << "u : " + u << endl;
    cout << "v : " + v << endl;
    if(isComplete(u)){
        v = recursive(v);
    }
    
    if(!isComplete(u)){
        u = reverce(u,v);
    }
    
    return u + v;
}

int main(void) {
    string p = "()))((()";
    string answer = "";
    
    answer = recursive(p);

    cout << answer << endl;

    return 0;
}
