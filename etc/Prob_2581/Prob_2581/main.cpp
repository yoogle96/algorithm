////
////  main.cpp
////  Prob_2581
////
////  Created by yoogle on 10/11/2018.
////  Copyright © 2018 yoogle. All rights reserved.
////
//
////  자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 모두 골라 이들 소수의 합과 최솟값을 찾는 프로그램을 작성하시오.
////  예를 들어 M=60, N=100인 경우 60이상 100이하의 자연수 중 소수는 61, 67, 71, 73, 79, 83, 89, 97 총 8개가 있으므로, 이들 소수의 합은 620이고, 최솟값은 61이 된다.
//
#include <stdio.h>

#define TRUE 1
#define FALSE 0

int Compare(int compNum){
    if(compNum == 2)
        return FALSE;
    if(compNum == 1)
        return TRUE;
    
    for(int i = 2; i < compNum; i++){
        if(compNum % i == 0)
            return TRUE;
    }
    return FALSE;
}

int main(int argc, const char * argv[]) {
    int num1, num2;
    int min = 0;
    int total = 0;
    int count = 0;
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    for(int i = 0; i <= num2 - num1; i++){
        if(Compare(num1 + i) == FALSE){
            total += num1 + i;
            count++;
            if(count == 1)
                min = num1 + i;
        }
    }
    
    if(count == 0){
        printf("-1\n");
    }
    else{
        printf("%d\n", total);
        printf("%d\n", min);
    }
    
    return 0;
}
