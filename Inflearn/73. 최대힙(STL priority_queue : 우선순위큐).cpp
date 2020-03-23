#include <iostream>
#include <queue>
using namespace std;
priority_queue<int> pq;
int main() {
    int input;
    while(1) {
        cin >> input;
        if(input != 0 && input != -1) {
            pq.push(input);
        }else {
            if(input == 0) {
                if(pq.empty()) {
                    cout << -1;
                }else {
                    cout << pq.top() << endl;
                    pq.pop();
                }
            }else {
                break;
            }
        }
    }
}