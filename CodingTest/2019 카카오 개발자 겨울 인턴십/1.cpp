#include <bits/stdc++.h>
using namespace std;
stack<int> s;
int n, m, ans;
int solution(vector<vector<int>> board, vector<int> moves) {
    for(int i = 0; i < moves.size(); i++) {
        n = board[0].size();
        m = moves[i];
        
        for(int j = 0; j < n; j++) {
            if(board[j][m - 1] != 0) {
                if(!s.empty() && s.top() == board[j][m - 1]) {
                    ans += 2;
                    s.pop();
                }else {
                    s.push(board[j][m - 1]);
                }
                board[j][m - 1] = 0;
                break;
            }
        }
    }
    return ans;
}