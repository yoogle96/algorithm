//
//  main.cpp
//  Prob_1002
//
//  Created by yoogle on 13/11/2018.
//  Copyright © 2018 yoogle. All rights reserved.
//

//  문제
//  조규현과 백승환은 터렛에 근무하는 직원이다. 하지만 워낙 존재감이 없어서 인구수는 차지하지 않는다. 다음은 조규현과 백승환의 사진이다.
//
//
//
//  이석원은 조규현과 백승환에게 상대편 마린(류재명)의 위치를 계산하라는 명령을 내렸다. 조규현과 백승환은 각각 자신의 터렛 위치에서 현재 적까지의 거리를 계산했다.
//
//  조규현의 좌표 (x1, y1)와 백승환의 좌표 (x2, y2)가 주어지고, 조규현이 계산한 류재명과의 거리 r1과 백승환이 계산한 류재명과의 거리 r2가 주어졌을 때, 류재명이 있을 수 있는 좌표의 수를 출력하는 프로그램을 작성하시오.
//
//  입력
//  첫째 줄에 테스트 케이스의 개수 T가 주어진다. 각 테스트 케이스는 다음과 같이 이루어져 있다.
//
//  한 줄에 x1, y1, r1, x2, y2, r2가 주어진다. x1, y1, x2, y2는 -10,000보다 크거나 같고, 10,000보다 작거나 같은 정수이고, r1, r2는 10,000보다 작거나 같은 자연수이다.
//
//  출력
//  각 테스트 케이스마다 류재명이 있을 수 있는 위치의 수를 출력한다. 만약 류재명이 있을 수 있는 위치의 개수가 무한대일 경우에는 -1을 출력한다.
//
//  예제 입력 1
//  3
//  0 0 13 40 0 37
//  0 0 3 0 7 4
//  1 1 1 1 1 5
//  예제 출력 1
//  2
//  1
//  0

#include <cstdio>
#include <cmath>

int main(int argc, const char * argv[]) {
    int testCase;
    double distence;
    int * smallCircle = new int[3];
    int * bigCircle = new int[3];
    int * temp = new int[3];
    
    scanf("%d",&testCase);
    
    for(int i = 0; i < testCase; i++){
        for(int j = 0; j < 3; j++)
            scanf("%d", &smallCircle[j]);
        for(int k = 0; k < 3; k++)
            scanf("%d", &bigCircle[k]);
        
        if(smallCircle[2] > bigCircle[2]){
            temp = smallCircle;
            smallCircle = bigCircle;
            bigCircle = temp;
        }
        
        distence = pow((double)(bigCircle[0] - smallCircle[0]),2.0) + pow((double)(bigCircle[1] - smallCircle[1]),2.0);
        distence = sqrt(distence);
        
        if(distence != 0){
            if((bigCircle[2] + smallCircle[2]) > distence && bigCircle[2] - smallCircle[2] < distence)
                printf("2\n");
            else if((smallCircle[2] + bigCircle[2]) == distence || bigCircle[2] - smallCircle[2] == distence)
                printf("1\n");
            else
                printf("0\n");
        }
        else{
            if(smallCircle[0] == bigCircle[0] && smallCircle[1] == bigCircle[1] && smallCircle[2] == bigCircle[2]){
                printf("-1\n");
                continue;
            }
            else
                printf("0\n");
        }
    }
    return 0;
}
