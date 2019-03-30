#include <cstdio>
using namespace std;
int main(void) {
    int n;
    int money;
    int count = 0;
    scanf("%d", &n);
    scanf("%d", &money);
    
    int * arr = new int(n);
    for(int i = 0 ; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i = n-1; i >= 0; i--){
        if(arr[i] > money){
            continue;
        }
        else if(money <= 0){
            break;
        }
        else{
            while(1){
                money -= arr[i];
                count++;
                if(money < arr[i]){
                    break;
                }
            }
        }
    }
    printf("%d\n", count);
    
    return 0;
}
