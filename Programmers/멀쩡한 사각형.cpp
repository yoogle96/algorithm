#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
	long long c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

long long answer = 1;
long long solution(int w,int h) {
    long long W = (long long)w;
    long long H = (long long)h;
    long long GCD = gcd(W, H);
    answer = (W * H) - (W + H - GCD);
    return answer;
}