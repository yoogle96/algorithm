// https://www.hackerrank.com/challenges/minimum-swaps-2/problem

int minimumSwaps(vector<int> arr) {
    int cnt = 0;
    int size = arr.size();
    for(int i = 0; i < size; i++) {
        if(arr[i] == i + 1) continue;
        for(int j = i; j < size; j++) {
            if(arr[j] == i + 1) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                cnt++;
                break;
            }
        }
    }
    return cnt;
}