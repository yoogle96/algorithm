#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(int num1, int num2){
    return num1 > num2;
}

int main() {
    string inputNum = "";
    cin >> inputNum;
    
    vector<int> v;
    
    for(int i = 0; i < inputNum.length(); i++){
        v.push_back(inputNum[i] - '0');
    }
    
    sort(v.begin(), v.end(), cmp);
    
    for(int i = 0; i < inputNum.length(); i++){
        printf("%d", v[i]);
    }
    
    return 0;
}
