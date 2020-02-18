#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    int distance;
    vector< vector<int> > v(9, vector<int>(9, 0));
    vector<double> avg(9), answer(9);
    for(int i = 0; i < 9; i++) {
        int sum = 0;
        for(int j = 0; j < 9; j++) {
            cin >> v[i][j];
            sum += v[i][j];
        }
        avg[i] = round((double)sum / 9.0);
    }

    for(int i = 0; i < 9; i++) {
        distance = 2113213213;
        int idx;
        for(int j = 0; j < 9; j++) {
            if(abs(avg[i] - v[i][j]) < distance) {
                distance = abs(avg[i] - v[i][j]);
                idx = j;
            }
        }       
        answer[i] = v[i][idx];
    }

    for(int i = 0; i < 9; i++) {
        cout << avg[i] << " " << answer[i] << endl;
    }
}