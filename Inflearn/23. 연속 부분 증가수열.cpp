#include <iostream>
using namespace std;
int N, maxx, cnt, input, temp;
int main() {
    cin >> N;
    while(N--) {
        cin >> input;
        if(temp <= input) {
            cnt++;
        }else { 
            if(maxx < cnt) maxx = cnt;
            cnt = 1;
        }
        temp = input;
    }
    cout << maxx;
}