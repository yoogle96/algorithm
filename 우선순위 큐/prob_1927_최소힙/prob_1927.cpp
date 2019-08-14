#include <iostream>
#include <queue>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    priority_queue<int, vector<int>, greater<int> > pq;
    int testCase, inputNum;
    cin >> testCase;
    for(int i = 0; i < testCase; i++){
        cin >> inputNum;
        if(inputNum == 0){
            if(!pq.empty()){
                cout << pq.top() << "\n";
                pq.pop();
            }else{
                cout << 0 << "\n";
            }
        }else{
            pq.push(inputNum);
        }
    }
}