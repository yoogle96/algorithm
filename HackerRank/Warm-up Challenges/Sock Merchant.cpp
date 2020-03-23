// https://www.hackerrank.com/challenges/sock-merchant/problem
int sockMerchant(int n, vector<int> ar) {
    int answer = 0;
    sort(ar.begin(), ar.end());
    int cnt = 1;
    for(int i = 0; i < n - 1; i++) {
        if(ar[i] == ar[i+1]) {
            cnt++;
        }else {
            answer += cnt/2;
            cnt=1;
        }
    }
    answer += cnt/2;
    return answer;
}