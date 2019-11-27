#include <iostream>
#include <vector>
#include <stack>

using namespace std;
vector<char> v;
vector<int> minV, maxV;
stack<char> maxStack, minStack;
string minAns, maxAns;
int maxNum[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
int minNum[10] = {0, 1, 2, 3, 4, 5, 6, 7 ,8, 9};

int main(){
    int K;
    char input;
    cin >> K;
    for(int i = 0 ; i < K; i++){
        cin >> input;
        v.push_back(input);
    }

    int maxCnt = 0, minCnt = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] == '<'){
            maxStack.push(v[i]);
            for(int j = i; j >= minCnt; j--){
                minV.push_back(minNum[j]);
                if(!minStack.empty()) minStack.pop();
            }
            minCnt = i+1;
        }
        else{
            minStack.push(v[i]);
            for(int j = i; j >= maxCnt; j--){
                maxV.push_back(maxNum[j]);
                if(!maxStack.empty()) maxStack.pop();
            }
            maxCnt = i+1;
        }
    }

    for(int i = K;  i >= maxCnt; i--){
        maxV.push_back(maxNum[i]);
    }

    for(int i = K; i >= minCnt; i--){
        minV.push_back(minNum[i]);
    }

    for(int i = 0; i <= K; i++){
        maxAns += to_string(maxV[i]);
        minAns += to_string(minV[i]);
        
    }

    cout << maxAns << endl;
    cout << minAns << endl;
}
