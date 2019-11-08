#include <iostream>
#include <queue>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int testCase, inputNum;

    priority_queue<int, vector<int>, less<int> > maxheap;
    priority_queue<int, vector<int>, greater<int> > minheap;
    cin >> testCase;
    cin >> inputNum;
    maxheap.push(inputNum);
    cout << maxheap.top() << "\n";

    for(int i = 1 ; i < testCase; i ++){
        cin >> inputNum;
        if(maxheap.size() > minheap.size()){
            minheap.push(inputNum);
        }else{
            maxheap.push(inputNum);
        }

        if(maxheap.top() > minheap.top()){
            minheap.push(maxheap.top());
            maxheap.pop();
            maxheap.push(minheap.top());
            minheap.pop();
        }
        cout << maxheap.top() << "\n";
    }
}