#include <iostream>
#include <vector>

using namespace std;

int main(void){

    vector<int> v;
    for(int i = 0; i < 10; i++){
        v.push_back(i);
    }

    v.clear();
    cout << "------------" << endl;
    for(int i = 0 ; i < v.size(); i++){
        cout << v[i] << endl;
    }
    cout << v.size();
    
    return 0;
}