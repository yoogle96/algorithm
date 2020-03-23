string isBalanced(string s) {
    int size = s.size();
    stack<char> stck;
    bool flag = true;
    for(int i = 0; i < size; i++) {
        if(s[i] == '{' || s[i] =='(' || s[i] == '[') {
            stck.push(s[i]);
        }else {
            if(stck.empty()) {
                flag = false;
                break;
            }
            if(s[i] == '}') {
                if(stck.top() == '{') {
                    stck.pop();
                    continue;
                }else {
                    flag = false;
                    break;
                }
            }else if(s[i] == ')') {
                if(stck.top() == '(') {
                    stck.pop();
                    continue;
                }else {
                    flag = false;
                    break;
                }
            }else {
                if(stck.top() == '[') {
                    stck.pop();
                    continue;
                }else {
                    flag = false;
                    break;
                }
            }
        }
    }
    if(flag && stck.empty()) return "YES";
    else return "NO";
}