#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int N, P, line, plat, answer;
vector<stack<int> > v(10);
int main() {
    cin >> N >> P;
    while(N--) {
        cin >> line >> plat;
        if(v[line].empty() || v[line].top() < plat) {
            v[line].push(plat);
            answer++;
        } else {
            while(!v[line].empty() && v[line].top() > plat) {
                v[line].pop();
                answer++;
            }
            if(!v[line].empty() && v[line].top() == plat) continue;
            
            v[line].push(plat);
            answer++;
        }
    }
    cout << answer << endl;
}
