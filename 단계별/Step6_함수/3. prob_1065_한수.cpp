#include <iostream>
#include <vector>
using namespace std;

bool isHan(int n){
    if(n < 100){return true;}

    vector<int> v;

    while(n != 0){
        v.push_back(n % 10);
        n /= 10;
    }
    int k = v[0] - v[1];
    for(int i = 1 ; i < v.size() - 1; i++){
        if(k != v[i] - v[i+1]){return false;}
    }

    v.clear();

    return true;
}

int main(){
    int n, count = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(isHan(i)){
            count++;
        }
    }

    cout << count << endl;
}