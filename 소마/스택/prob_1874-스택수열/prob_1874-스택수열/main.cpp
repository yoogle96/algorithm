#include <cstdio>
#include <stack>
#include <string>

using namespace std;

int main(void) {
    int input = 0;
    scanf("%d", &input);
    int * stackArray = new int[input];
    stack<int> s;
    int curr = 0;
    string result = "";
    
    for(int i = 0; i < input; i++){
        scanf("%d", &stackArray[i]);
    }
    
    for(int i = 0; i < input; i++){
        for(int j = curr; j < input; j++){
            if(stackArray[i] != j + 1){
                s.push(j+1);
                curr+=1;
                result+="+";
            }
            else{
                s.push(j+1);
                curr+=1;
                result+="+";
                while(!s.empty()){
                    if(s.top() >= stackArray[i]){
                        if(s.top() != stackArray[i]){
                            printf("NO\n");
                            return 0;
                        }
                        s.pop();
                        result+="-";
                        i+=1;
                        
                    }
                    else{
                        break;
                    }
                }
            }
        }
    }
    delete[] stackArray;
    for(int i = 0; i < result.length(); i++){
        printf("%c\n", result[i]);
    }
    return 0;
}
