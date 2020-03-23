#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCase;
    int count = 0;
    char temp;
    string input;
    vector<string> v;
    vector<char> result;

    cin >> testCase;
    for(int i = 0; i < testCase; i++){
        cin >> input;
        v.push_back(input);
    }
    
    sort(v.begin(), v.end());

    temp = v[0][0];
    for(int i = 0; i < testCase; i++){
        if(v[i][0] == temp){
            count+=1;
        }else{
            if(count >= 5){
                result.push_back(temp);
            }
            temp = v[i][0];
            count = 1;
        }
    }

    if(count >= 5){
        result.push_back(temp);
    }

    if(result.empty()){
        cout << "PREDAJA";
    }

    for(int i = 0; i < result.size(); i++){
        cout << result[i];
    }

    return 0;
}