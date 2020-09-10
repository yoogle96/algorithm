#include <bits/stdc++.h>
using namespace std;
string ans;
map<int, pair<int, int> > m;
void initPoint() {
    m[1] = {0, 0};
    m[2] = {0, 1};
    m[3] = {0, 2};
    m[4] = {1, 0};
    m[5] = {1, 1};
    m[6] = {1, 2};
    m[7] = {2, 0};
    m[8] = {2, 1};
    m[9] = {2, 2};
    m['*'] = {3, 0};
    m[0] = {3, 1};
    m['#'] = {3, 2};
}

string solution(vector<int> numbers, string hand) {
    initPoint();
    pair<int, int> curLeft = m['*'];
    pair<int, int> curRight = m['#'];
    for (auto t : numbers) {
        if (t == 1 || t == 4 || t == 7) {
            ans += 'L';
            curLeft = m[t];
        }else if (t == 3 || t == 6 || t == 9) {
            ans += 'R';
            curRight = m[t];
        }else {
            int leftDis = abs(m[t].first - curLeft.first) + abs(m[t].second - curLeft.second);
            int rightDis = abs(m[t].first - curRight.first) + abs(m[t].second - curRight.second);
            if (leftDis == rightDis) {
                if (hand == "right") {
                    ans += 'R';
                    curRight = m[t];
                }else {
                    ans += 'L';
                    curLeft = m[t];
                }
            } else if (leftDis > rightDis) {
                ans += 'R';
                curRight = m[t];
            } else {
                ans += 'L';
                curLeft = m[t];
            }
        }
    }
    return ans;
}