#include <cstdio>

bool check(int _woman, int _man){
    return _woman/2 < _man;
}

int main(){
    int man;
    int woman;
    int intern;
    int total;
    int count;
    scanf("%d %d %d", &woman, &man, &intern);

    while(intern > 0){
        if(check(woman, man)){
            man--;
        }else{
            woman--;
        }
        intern--;
    }

    printf("%d", woman/2 <= man ? woman/2 : man);
}