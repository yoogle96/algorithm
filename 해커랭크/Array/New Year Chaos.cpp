// https://www.hackerrank.com/challenges/new-year-chaos/problem
void minimumBribes(vector<int> q) {
    int answer = 0;
    int len = q.size();
    int ch = len;
    for(int i = len - 1; i >= 0; i--) {
        for(int j = i; j >= 0; j--) {
            if(q[j] == i + 1) {
                int cnt = 0;
                for(int k = j; k < i; k++) {
                    int temp = q[k + 1];
                    q[k + 1] = q[k];
                    q[k] = temp;
                    cnt++;
                    if(cnt > 2) {
                        cout << "Too chaotic" << endl;
                        return;
                    }
                }
                answer += cnt;
                break;
            }
        }
    }

    cout << answer << endl;
}