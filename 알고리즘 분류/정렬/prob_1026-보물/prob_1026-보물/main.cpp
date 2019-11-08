#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(const int num1, const int num2){
    return num1 > num2;
}

int main(void) {
    vector<int> v1;
    vector<int> v2;
    int testCase = 0;
    scanf("%d", &testCase);
    int result = 0;
    
    for(int i = 0; i < testCase; i++){
        int inputNum = 0;
        scanf("%d", &inputNum);
        v1.push_back(inputNum);
    }
    
    for(int i = 0; i < testCase; i++){
        int inputNum = 0;
        scanf("%d", &inputNum);
        v2.push_back(inputNum);
    }
    
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), cmp);
    
    for(int i = 0; i < testCase; i++){
        result += v1[i] * v2[i];
    }
    
    printf("%d\n", result);
    
    return 0;
}
