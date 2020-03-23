#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


long answer;
long countTriplets(vector<long> arr, long r) {
    unordered_map<int, int> um;
    int size = arr.size();
    vector<int> ch(3, 1);
    int ri = (int)r;
    for(int i = 1; i < 3; i++) ch[i] = ch[i - 1] * ri;
    for(int i = 0; i < size; i++) {
        um[arr[i]]++;
    }

    while(1) {
        int maxx = -2147000000;
        bool flag = true;
        for(int i = 0; i < 3; i++) {
            if(um.count(ch[i])) {
                if(maxx < um[ch[i]]) {
                    maxx = um[ch[i]];
                }
            }else {
                flag = false;
                break;
            }
        }
        if(!flag) break;
        else {
            answer += maxx;
            for(int i = 0; i < 3; i++) ch[i] *= (int)r;
        }
    }
    return answer;
}

int main( ){
    vector<long> test(4);
    test[0] = 1;
    test[1] = 2;
    test[2] = 2;
    test[3] = 4;
    long answer = countTriplets(test , 2);
    cout << answer;
}