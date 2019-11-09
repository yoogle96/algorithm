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

bool check(string u){
    stack<char> s;
    if(u[0] == ')') return false;
    for(int i = 0 ; i < u.length(); i++){
        char token = u[i];
        if(token == '('){
            s.push(token);
        }else{
            if(s.empty()) return false;
            char check = s.top(); s.pop();
            if(check != '('){
                return false;
            }
        }
    }

    return true;
}

string recersive(string p){
    if(check(p) || p == "") return p;
    string u = "", v = "";
    int openCnt = 0, closeCnt = 0;
    for(int i = 0 ; i < p.length(); i++){
        if(p[i] == '('){
            openCnt++;
            u += p[i];
        }else{
            closeCnt++;
            u += p[i];
        }

        if(openCnt != 0 && openCnt == closeCnt){
            v = p.substr(i+1, p.length()-i-1);
            break;
        }
    }

    if(check(u)){
        return u + recersive(v);
    }else{
        string temp = "(";
        temp += recersive(v);
        temp += ")";
        u.erase(u.begin());
        u.erase(u.end()-1);
        u = swap(u);
        temp += u;
        return temp;
    }
}

string solution(string p) {    

    string answer = recersive(p);
    return answer;
}
