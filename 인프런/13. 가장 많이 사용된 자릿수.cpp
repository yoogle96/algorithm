#include <iostream>
#include <string>
using namespace std;
string s;
int arr[10], answer;
int main() {
    cin >> s;
    int len = s.size();
    for(int i = 0; i < len; i++) {
        char token = s[i];
        arr[atoi(&token)]++;
    }

    int max = 0;
    for(int i = 0; i < 10; i++) {
        if(max < arr[i]) {
            max = arr[i];
            answer = i;
        } else if(max == arr[i]) {
            if(answer < i) {
                answer = i;
            }
        }
    }
    cout << answer;
}