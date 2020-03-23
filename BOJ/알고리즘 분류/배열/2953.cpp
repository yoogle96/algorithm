#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<int> > arr(5, vector<int>(5));
    int total;
    int count = 1;

    for(int i = 0; i < 5; i++){
        total = 0;
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
            total += arr[i][j];
        }
        arr[i][4] = total;
    }

    vector<int> max(5);
    max = arr[0];
    for(int i = 1; i < 5; i++){
        if(max[4] < arr[i][4]){
            max = arr[i];
            count = i+1;
        }
        
    }

    cout << count << " " << max[4];
}