#include <cstdio>

int main(){
    int T, x, y, dist;
    scanf("%d", &T);
    while(T--){
        scanf("%d %d", &x, &y);
        dist = y - x;
        // TODO : i를 int로 선언해주면 범위가 넘어가 시간초과가 난다.. 
        long long i = 1;
        int cnt = 0;
        for(;;i++){
            if(i*i >= dist) break;
        }
        i--;

        if(dist > (i * i + i)){
            cnt = (i * 2 + 1);
        }else{
            cnt = (i * 2);
        }

        printf("%d\n", cnt);
    }

    return 0;
}