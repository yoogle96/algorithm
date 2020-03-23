// https://www.hackerrank.com/challenges/fraudulent-activity-notifications/problem

double getMid(int d) {
    int size = ch.size();
    int cnt = 0;
    double mid;
    if(d % 2 == 0) {
        int temp1 = 0, temp2 = 0;
        for(int i = 0; i < size; i++) {
            cnt += ch[i];

            if(temp1 == 0 && cnt >= (d / 2)) {
                temp1 = i;
            }
            if(temp2 == 0 && cnt >= (d / 2) + 1) {
                temp2 = i;
                mid = (double)(temp1 + temp2) / 2.0;
                break;
            }
        }
    }else {
        for(int i = 0; i < size; i++) {
            cnt += ch[i];
            if(cnt > (d / 2)) {
                mid = i;
                break;
            }
        }
    }
    return mid;
}

// Complete the activityNotifications function below.
int activityNotifications(vector<int> expenditure, int d) {
    int size = expenditure.size();
    int cnt = 0;
    for(int i = 0; i < d; i++) {
        ch[expenditure[i]]++;
    }
    for(int i = d; i < size; i++) {
        double mid = getMid(d);
        if(expenditure[i] >= mid * 2.0) cnt++;
        ch[expenditure[i-d]]--;
        ch[expenditure[i]]++;
    }
    return cnt;
}