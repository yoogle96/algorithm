#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int testCount = 0;
    int findCount = 0;
    int inputNum;
    vector<int> v;
    
    scanf("%d", &testCount);
    scanf("%d", &findCount);
    
    for(int i = 0; i < testCount; i++){
        inputNum = 0;
        scanf("%d", &inputNum);
        v.push_back(inputNum);
    }
    sort(v.begin(), v.end());
    printf("%d", v[findCount-1]);
    return 0;
}
