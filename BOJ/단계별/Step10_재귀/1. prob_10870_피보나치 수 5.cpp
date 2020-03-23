#include <iostream>

using namespace std;

int cnt = 2, c, ans = 1;
void fibo(int n){
    if(cnt >= c) return;
    cnt++;
    int temp = ans;
    ans+=n;
    fibo(temp);
}

int main(){
    cin >> c;
    if(c == 0){
        ans = 0;
    }else{
        fibo(1);    
    }
    cout << ans << endl;
}