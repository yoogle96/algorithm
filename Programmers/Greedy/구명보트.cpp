#include <bits/stdc++.h>
using namespace std;
int ans;
int solution(vector<int> people, int limit) {
    sort(people.begin(), people.end());
    int left = 0, right = people.size() - 1;
    while(left < right + 1) {
        if(people[left] + people[right] <= limit) {
            left++;
        }
        right--;
        ans++;
    }
    return ans;
}