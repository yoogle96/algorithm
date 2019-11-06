#include <iostream>
using namespace std;

int main(){
    int n, ans = 1, temp=1;
    cin >> n;
    while(ans){
        if(temp >= n) break;
        temp += 6*ans;
        ans++;
    }

    cout << ans << endl;
}
