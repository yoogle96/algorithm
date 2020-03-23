#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<int> v;

void tokenizer(string N){
    for(long long i = 0; i < N.length(); i++){
        v.push_back(N[i] - '0');
    }
}

int main(){
    string N;
    cin >> N;
    tokenizer(N);
    sort(v.begin(), v.end(),greater<int> ());

    if(v[v.size()-1] != 0){
        cout << "-1" << endl;
        return 0;
    }

    int cnt = 0;
    for(int i = 0; i < v.size(); i++){
        cnt *= 10;
        cnt = (cnt+v[i]) % 3;
    }

    if(cnt != 0){
        cout << "-1" << endl;
    }else{
        for(int i = 0; i < v.size(); i++){
            cout << v[i];
        }
    }
    cout << "\n";
}