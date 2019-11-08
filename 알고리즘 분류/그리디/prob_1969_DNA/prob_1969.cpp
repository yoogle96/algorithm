#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int N, M;
    string inputString;
    cin >> N >> M;
    vector<char> v[M];
    for(int i = 0 ; i < N; i++){
        for(int j = 0; j < M; j++){ 
            char temp = inputString[j];
            v[j].push_back(temp);
        }
    }

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            
        }
    }

}