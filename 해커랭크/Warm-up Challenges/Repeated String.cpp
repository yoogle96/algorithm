// https://www.hackerrank.com/challenges/repeated-string/problem

long repeatedString(string s, long n) {
    int cnt = 0;
    long answer = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'a') cnt++;
    }
    answer = cnt * (n / s.size());
    int mod = n % s.size();
    cnt = 0;
    for(int i = 0; i < mod; i++) {
        if(s[i] == 'a') cnt++;
    }
    answer += cnt;
    return answer;
}