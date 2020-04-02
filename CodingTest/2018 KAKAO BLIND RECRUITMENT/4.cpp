#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
int ans;
int solution(int m, int n, vector<string> board) {
    while(1) {
        vector< pair<int, int> > tmp;
        int tmpCnt = 0;
        for(int i = 0; i < m - 1; i++) {
            for(int j = 0; j < n - 1; j++) {
                if(board[i][j] != ' ' &&
                    board[i][j] == board[i][j+1] 
                   && board[i+1][j] == board[i+1][j+1] 
                   && board[i][j] == board[i+1][j]) {
                    tmp.push_back(make_pair(i, j));
                    tmpCnt += 4;
                }
            }
        }

        if(tmpCnt == 0) break;
        ans += tmpCnt;
        
        int cnt = 0;
        for(auto t : tmp) {
            for(int i = 0; i < 2; i++) {
                for(int j = 0; j < 2; j++) {
                    if(board[t.first + i][t.second + j] != ' ') {
                        board[t.first + i][t.second + j] = ' ';
                    }else {
                        cnt++;
                    }
                }
            }
        }
        ans -= cnt;
        for(int i = 0; i < n; i++) {
            int dis = 0;
            for(int j = m - 1; j >= 0; j--) {
                if(board[j][i] == ' ') {
                    dis++;
                }else if(dis > 0 && board[j][i] != ' ') {
                    char tmpChr = board[j][i];
                    board[j][i] = ' ';
                    board[j + dis][i] = tmpChr;
                }
            }
        }
    }
    return ans;
}

int main() {
    cout << solution(6, 6, {"TTTANT", "RRFACC", "RRRFCC", "TRRRAA", "TTMMMF", "TMMTTJ"});
}