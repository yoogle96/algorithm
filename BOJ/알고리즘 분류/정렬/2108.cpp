#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

int arr[8001];

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testCase, total = 0, input, max, mode;
    vector<int> v, vMode;
    
    cin >> testCase;
    for(int i = 0; i < testCase; i++){
        cin >> input;
        if(input >= 0){
            if(input == 0){
                arr[0]++;
            }else{
                arr[input+4000]++;
            }
        }else{
            arr[input*-1]++;
        }
        total += input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    max = 0;
    for(int i = 0; i <= 8000; i++){
        if(arr[i] >= max){
            if(arr[i] > max){
                vMode.clear();
                max = arr[i];
            }
            if(i <= 4000){
                mode = -i;
            }else{
                mode = i - 4000;
            }
            vMode.push_back(mode);
        }
    }
    sort(vMode.begin(), vMode.end());
    
    cout << round((float)total/testCase) << "\n";
    cout << v[v.size()/2] << "\n";
    cout << (vMode.size() > 1 ? vMode[1] : vMode[0]) << "\n";
    cout << *(v.end()-1) - *(v.begin()) << "\n";

    return 0;
}
