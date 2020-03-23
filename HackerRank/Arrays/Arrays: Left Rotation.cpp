// https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem

vector<int> rotLeft(vector<int> a, int d) {
    int size = a.size();
    vector<int> answer(size);
    for(int i = 0; i < size; i++) {
        int idx = i + d;
        if(idx < size) {
            answer[i] = a[idx];
        }else {
            answer[i] = a[idx - size];
        }
    }
    return answer;
}