#include <cstdio>
int arr[1000001] = {0,};
int main(){
    int testCase, inputNum;
    int max, min;
    scanf("%d", &testCase);
    scanf("%d", &inputNum);
    max = inputNum; min = inputNum;
    for(int i = 1; i < testCase; i++){
        scanf("%d", &inputNum);
        arr[i] = inputNum;
        if(arr[i] > max) max = inputNum;
        if(arr[i] < min) min = inputNum;
    }

    printf("%d\n", min);
    printf("%d\n", max);
    
}