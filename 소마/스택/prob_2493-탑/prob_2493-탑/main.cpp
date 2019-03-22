#include <cstdio>
#include <stack>

using namespace std;

int main(void) {
    int buildCount = 0;
    int heigh = 0;
    scanf("%d", &buildCount);
    stack<int> s;
    int * build = new int[buildCount];
    
    for(int i = 0; i < buildCount; i++){
        scanf("%d", &heigh);
        build[i] = heigh;
    }
    
    for(int i = (buildCount-1); i >= 0; i--){
        int count = 0;
        int cur = build[i];
        int top = build[i-1];
        if(top > cur){
            s.push(i);
        }
        else{
            while (i-count>0) {
                count += 1;
                if(build[i-count] > cur){
                    for(int j = 0; j < count; j++){
                        s.push(i-count+1);
                        break;
                    }
                }
                
            }
        }
    }
    
    for(int i = 0; i <= buildCount-s.size(); i++){
        s.push(0);
    }
    
    while (!s.empty()) {
        printf("%d\n", s.top());
        s.pop();
    }
    delete[] build;
}
