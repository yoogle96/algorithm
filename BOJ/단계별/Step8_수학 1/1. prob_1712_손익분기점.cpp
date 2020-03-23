#include <cstdio>

using namespace std;

int main(){
    int a, b, c, ans=0;
    scanf("%d %d %d", &a, &b, &c);
    if(c <= b) ans = -1;
    else ans = a / (c-b) + 1;
    printf("%d", ans);
}