//
//  main.cpp
//  Prob_4344
//
//  Created by yoogle on 10/11/2018.
//  Copyright © 2018 yoogle. All rights reserved.
//
//  문제
//  대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 당신은 그들에게 슬픈 진실을 알려줘야 한다.
//
//  입력
//  첫째 줄에는 테스트 케이스의 개수 C가 주어진다.
//
//  둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고, 이어서 N명의 점수가 주어진다. 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.
//
//  출력
//  각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다.

//#include <stdio.h>
//#include <stdlib.h>
//#include <vector>
//using namespace std;
//
//void resultAvg(vector< vector<int> >& _v, double _avg, int _testCase){
//    int count = 0;
//    for(int i = 0; i < _v[_testCase].size(); i++){
//        if(_v[_testCase][i] > _avg)
//            count++;
//    }
//
//    printf("%.3f \n", (double)(count / (double)_v[_testCase].size()) * 100.0);
//    
//}
//
//int main(int argc, const char * argv[]) {
//    int testCase;
//    
//    int studentNum;
//    
//    vector< vector<int> > v;
//    
//    scanf("%d", &testCase);
//    
//    for(int i = 0; i < testCase; i++){
//        scanf("%d", &studentNum);
//        if(studentNum < 1 || studentNum > 1000){
//            exit(1);
//        }
//        
//        vector<int> student;
//        student.resize(studentNum);
//        printf("cap = %d\n", student.capacity());
//        
//        v.push_back(student);
//        
//        int pushNum;
//        for(int j = 0; j < studentNum; j++){
//            pushNum = 0;
//            scanf("%d", &pushNum);
//            if(pushNum < 0 || pushNum > 100)
//                exit(1);
//            
//            v[i][j] = pushNum;
//        }
//    }
//    
//    int total;
//    double avg;
//    
//    for(int q = 0; q < testCase; q++){
//        total = 0;
//        avg = 0.0;
//        for(int k = 0; k < v[q].size(); k++){
//            total += v[q][k];
//        }
//        avg = (double)(total / v[q].size());
//        resultAvg(v, avg, q);
//    }
//    vector< vector<int> >().swap(v);
////    printf("cap = %d \n", v.capacity());
//    
//    return 0;
//}
//
