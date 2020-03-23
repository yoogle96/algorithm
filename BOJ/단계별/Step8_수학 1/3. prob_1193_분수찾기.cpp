#include <iostream>

using namespace std;

int main(){
    int x, step=2, range=1, a,b;
    cin >> x;

    while(1){
        range += step;
        if(range >= x){
            if(step%2 == 0){
                a = 1; b = step;
                for(int i = step-1; i > range - x; i--){
                    a += 1;
                    b -= 1;
                }
            }else{
                a = step; b = 1;
                for(int i = step-1; i > range - x; i--){
                    a -= 1;
                    b += 1;
                }
            }
            break;
        }
        step++;
    }
    cout << a << "/" << b << endl;
}