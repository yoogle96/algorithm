#include <iostream>
#include <queue>
using namespace std;

int func(int a){
    return (a < 0 ? (a * -1) : a);
}

struct cmp{
    bool operator()(int a, int b){
        if(func(a) == func(b)){
            return a > b;
        }else{
            return func(a) > func(b);
            }
        }
};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    priority_queue<int, vector<int>, cmp > pq;
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