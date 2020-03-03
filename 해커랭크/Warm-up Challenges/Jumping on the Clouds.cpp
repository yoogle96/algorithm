// https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem
int jumpingOnClouds(vector<int> c) {
    int cnt = 0, idx = 0;
    while(1) {
        if((c.size() - idx) > 2 && c[idx + 2] == 0) {
            idx += 2;
            cnt++;
        }else {
            idx += 1;
            cnt++;
        }
        if(idx == c.size() - 1) break;
    }
    return cnt;
}
