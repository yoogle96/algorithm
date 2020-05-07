#include <bits/stdc++.h>
using namespace std;
int ans, ch[8], N;
vector<string> DATA;
string fr;
map<char, int> m;
bool check() {
    for(int i = 0; i < N; i++) {
        char f1 = DATA[i][0], f2 = DATA[i][2], op = DATA[i][3];;
        int num = DATA[i][4] - '0';
        int dis = abs(m[f1] - m[f2]);
        if(op == '=') {
            if(dis - 1 != num) return false;
        }else if(op == '<') {
            if(dis - 1 >= num) return false;
        }else if(op == '>') {
            if(dis - 1 <= num) return false;
        }
    }
    return true;
}
void dfs(int cnt) {
    if(cnt == 8) {
        if(check()) ans++;
        return;
    }

    for(int i = 0; i < 8; i++) {
        if(!ch[i]) {
            ch[i] = 1;
            m[fr[cnt]] = i + 1;
            dfs(cnt + 1);
            ch[i] = 0;
        }
    }
}
int solution(int n, vector<string> data) {
    ans = 0;
    N = n;
    DATA = data;
    for(int i = 0; i < 8; i++) ch[i] = 0;
    fr = "ACFJMNRT";
    m['A'] = 1;
    m['C'] = 2;
    m['F'] = 3;
    m['J'] = 4;
    m['M'] = 5;
    m['N'] = 6;
    m['R'] = 7;
    m['T'] = 8;

    dfs(0);
    return ans;
}

int main() {
    // solution(2, {"N~F=0", "R~T>2"});
    cout << solution(2, {"M~C<2", "C~M>1"});
}