// https://www.hackerrank.com/challenges/2d-array/problem

int hourglassSum(vector<vector<int>> arr) {
    int maxx = -2147000000;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            int sum = 0;
            for(int k = j; k < j + 3; k++) {
                sum += arr[i][k];
            }
            sum += arr[i + 1][j + 1];
            for(int k = j; k < j + 3; k++) {
                sum += arr[i + 2][k];
            }
            if(maxx < sum) maxx = sum;
        }
    }

    return maxx;
}