#include <iostream>
#include <queue>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, inputNum;
    priority_queue<int, vector<int>, greater<int> > pq;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> inputNum;
        pq.push(inputNum);
    }

    for(int i = N; i < N * N; i++){
        cin >> inputNum;
        if(inputNum > pq.top()){
            pq.pop();
            pq.push(inputNum);
        }
    }

    cout << pq.top() << "\n";
}