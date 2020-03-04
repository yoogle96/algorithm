// https://www.hackerrank.com/challenges/mark-and-toys/problem
int maximumToys(vector<int> prices, int k) {
    int size = prices.size(), cnt = 0;
    sort(prices.begin(), prices.end());
    for(auto pr : prices) {
        k -= pr;
        if(k < 0) break;
        cnt++;
    }
    return cnt;
}