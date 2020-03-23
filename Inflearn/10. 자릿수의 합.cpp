#include <iostream>
using namespace std;
int N, answer;

int digit_sum(int x) {
    int sum = 0;
    while(x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    cin >> N;
    int max = 0;
    while(N--) {
        int input;
        cin >> input;
        int sum = digit_sum(input);
        if(max < sum) {
            max = digit_sum(input);
            answer = input;
        } else if(max == sum) {
            if(answer < input) answer = input;
        }
    }
    cout << answer;
}