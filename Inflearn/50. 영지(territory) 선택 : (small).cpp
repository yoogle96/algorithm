#include <iostream>
#include <vector>
using namespace std;
int H, W, row, col, maxx;
int main() {
    maxx = -214780000;
    cin >> H >> W;
    vector< vector<int> > v(H, vector<int>(W));
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            cin >> v[i][j];
        }
    }
    cin >> row >> col;
    for(int i = 0; i <= H - row; i++) {
        for(int j = 0; j <= W - col; j++) {
            int sum = 0;
            for(int w = 0; w < row; w++) {
                for(int k = 0; k < col; k++) {
                    sum+=v[i+w][j+k];
                }
            }
            if(maxx < sum) maxx = sum;
        }
    }
    cout << maxx;
}