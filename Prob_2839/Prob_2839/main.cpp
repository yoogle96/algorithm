#include <cstdio>
int Compare(int num){
    return num % 5 == 0 ? num/5 : (num/5)+1;
}

int minResult(int num, int size);

int main() {
    int n;
    scanf("%d", &n);
    int size = Compare(n);
    int temp;
    
    for(int i = size; i >= 0; i--){
        temp = n;
        int j;
        for(j = i; j > 0; j--){
            if(n < 3)
                break;
            temp -= 5;
        }
        if(temp > 0){
            while(1){
                temp -= 3;
                if(temp < 3)
                    break;
            }
        }
        if(temp == 0){
            printf("%d\n", size);
            return 0;
        }
        
        if(temp >= 1){
            printf("%d\n", minResult(n,size));
            return 0;
        }
    }
    return 0;
}

int minResult(int num, int size){
    int temp;
    int numFive;
    int count;
    int minNum = 0;

    for(int i = 0; i < size; i++){
        temp = num;
        numFive = 0;
        count = 0;
        for(int j = 0; j < i; j++){
            numFive += 5;
            count++;
        }
        
        temp -= numFive;
        
        
        if(temp % 3 == 0){
            count += temp / 3;
            minNum = count;
        }
    }
    
    if(minNum != 0)
        return minNum;
    else
        return -1;
}
