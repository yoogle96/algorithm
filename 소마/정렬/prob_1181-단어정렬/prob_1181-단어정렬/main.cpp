#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool cmp(string test1, string test2){
    if(test1.length() < test2.length()){
        return true;
    }
    else if(test1.length() == test2.length()){
        return test1 < test2;
    }
    else{
        return false;
    }
}

int main(void) {
    vector<string> v;
    int testCount;
    string inputString = "";
    scanf("%d", &testCount);
    for(int i = 0; i < testCount; i++){
        cin >> inputString;
        v.push_back(inputString);
    }
    
    sort(v.begin(), v.end(), cmp);
    v.erase(unique(v.begin(), v.end()), v.end());
    
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
    
    return 0;
}
