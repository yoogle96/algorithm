#include<iostream>
#include <string>
#include <cstring>
#include<algorithm>
#include <vector>
#include <queue>
#include<cmath>
#include<stack>
#pragma warning(disable:4996)
using namespace std;
int num[6];
static int three[][3] = { {0,1,2},{0,1,4},{0,2,4},{0,3,4},{5,1,2},{5,1,4},{5,2,4},{5,3,4} };
static int two[][2] = { {0,1},{0,2},{0,3},{0,4},{5,1},{5,2},{5,3},{5,4},{1,2},{1,3},{2,4},{3,4} };
int main() {
    printf("------------------\n");
    long long N;
    int st=151, sd=101,so=51;
    scanf("%lld", &N);
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] < so)
            so = num[i];
    }
    if (N == 1)
    {
        int max = 0,sum=0;
        for (int i=0;i<6;i++)
        {
            if (num[i] > max)
                max = num[i];
            sum += num[i];
        }
        printf("%d\n",sum-max);
    }
    else
    {
        for (int i = 0; i < 8; i++)
        {
            int tempT;
            tempT = num[three[i][0]] + num[three[i][1]] + num[three[i][2]];
            if (st > tempT)
                st = tempT;
        }
        for (int i=0;i<12;i++)
        {
            int tempD;
            tempD = num[two[i][0]] + num[two[i][1]];
            if (sd > tempD)
                sd = tempD;
        }
        //printf("%d %d %d\n",so,sd,st);
        long long result = 0;
        result+= ((N - 2)*(N - 1) * 4 + (N - 2)*(N - 2))*so;
        result += (2 * N - 3) * 4 * sd;
        result+=4 * st;
        printf("%lld\n", result);
    }
}
