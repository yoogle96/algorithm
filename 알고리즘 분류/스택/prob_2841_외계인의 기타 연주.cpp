#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector< priority_queue<int> > v(10);
int N, P, line, plat, answer;
int main() {
    cin >> N;
    cin >> P;
    while(N--) {
        cin >> line;
        cin >> plat;
        if(!v[line].empty()) {
            priority_queue<int> temp = v[line];
            bool flag = false;
            while(!temp.empty()) {
                if(temp.top() == plat) {
                    flag = true;
                    break;
                }
                temp.pop();
            }
            if(flag) continue;
            if(v[line].top() > plat) {
                while(v[line].top() > plat) {
                    v[line].pop();
                    answer++;
                    if(v[line].empty()) break;
                }
                v[line].push(plat);
            }else {
                v[line].push(plat);
            }
        }else{
            v[line].push(plat);
        }
        answer++;
    }
    cout << answer;
    
}