// https://www.hackerrank.com/challenges/counting-valleys/problem
int countingValleys(int n, string s) {
    int cur = 0, cnt = 0;
    bool flag = false;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'U') {
            cur++;
        }else {
            cur--;
        }
        if(cur < 0 && !flag) {
            flag = true;
            cnt++;
        } else if(cur >= 0 && flag) {
            flag = false;
        }
    }
    return cnt;
}