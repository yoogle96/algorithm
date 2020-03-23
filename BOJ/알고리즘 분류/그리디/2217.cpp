#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;
int main(void) {
    int count;
    int total = 0;
    vector<int> v;
    
    scanf("%d", &count);
    
    for(int i = 0; i < count; i++){
        int inputNum;
        scanf("%d", &inputNum);
        v.push_back(inputNum);
    }
    
    sort(v.begin(), v.end());
    
    total = v[count-1];
    for(int i = count-2 ; i >= 0; i--){
        if(total < v[i] * (count - i) ){
            total = v[i] * (count - i);
        }
    }
    
    printf("%d\n", total);
    return 0;
}
