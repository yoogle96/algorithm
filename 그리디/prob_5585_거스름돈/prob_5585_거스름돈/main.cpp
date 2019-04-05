#include <cstdio>
#include <algorithm>

using namespace std;

int main(void) {
    int money;
    int count = 0;
    
    scanf("%d", &money);
    money = 1000 - money;
    
    count += money/500;
    money = money % 500;
    
    count += money / 100;
    money = money % 100;
    
    count += money / 50;
    money = money % 50;
    
    count += money / 10;
    money = money % 10;
    
    count += money / 5;
    money = money % 5;
    
    count += money / 1;
    
    printf("%d\n", count);
    
    return 0;
}
