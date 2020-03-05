// https://www.hackerrank.com/challenges/ctci-bubble-sort/problem
void countSwaps(vector<int> a) {
    int size = a.size();
    int cnt = 0;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                cnt++;
            }
        }
    }
    cout << "Array is sorted in " << cnt << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[size - 1] << endl;
 }