#include <iostream>
#include <vector>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;
    int testCase, inputNum, firstIdx = 0, lastIdx = 0, result = 0, temp;
    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        cin >> inputNum;
        v.push_back(inputNum);
    }

    for(int i = 0; i < testCase; i++){
        if(v[i] < v[i+1]){
            lastIdx++;
        }else{
            temp = v[lastIdx] - v[firstIdx];
            if(temp > result){
                result = temp;
            }
            firstIdx = i+1;
            lastIdx = i+1;
        }
    }
    
    cout << result;
}