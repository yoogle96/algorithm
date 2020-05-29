#include <bits/stdc++.h>
#define INF 100000
using namespace std;
int ans, arr[INF];
int solution(vector<int> nums) {
    arr[1] = 1;
    for(int i = 2; i <= sqrt(INF); i++) {
        if(!arr[i]) {
            for(int j = i + i; j <= INF; j = j + i) {
                if(j > INF) break;
                arr[j] = 1;
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        for(int j = i + 1; j < nums.size(); j++) {
            sum += nums[j];
            for(int k = j + 1 ; k < nums.size(); k++) {
                sum += nums[k];
                if(!arr[sum]) ans++;
                sum -= nums[k];
            }
            sum -= nums[j];
        }
        sum -= nums[i];
    }
    return ans;
}