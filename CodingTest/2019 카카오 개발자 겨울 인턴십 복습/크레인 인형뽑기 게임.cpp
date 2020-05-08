#include <bits/stdc++.h>
using namespace std;
int ans;
stack<int> s;
int solution(vector<vector<int>> board, vector<int> moves) {
    int sz = board.size();
    for(auto t : moves) {
        t -= 1;
        for(int i = 0; i < sz; i++) {
            if(board[i][t] != 0) {
                if(s.empty()) {
                    s.push(board[i][t]);
                    board[i][t] = 0;
                    break;
                }else {
                    if(board[i][t] == s.top()) {
                        ans += 2;
                        board[i][t] = 0;
                        s.pop();
                    }else {
                        s.push(board[i][t]);
                        board[i][t] = 0;
                    }
                }
                break;
            }
        }
    }
    return ans;
}