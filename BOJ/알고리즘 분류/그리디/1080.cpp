#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int N, M, ans;
vector< vector<int> > A, B, C;

bool check();

bool checkTop(int top){
    for(int i = 0; i < M - 1; i++){
        if(C[top][i] != C[top][i+1]) return false;
    }
    
    return true;
}

int main(){
    scanf("%d %d", &N, &M);
    bool change = false;
    A.assign(N, vector<int>(M));
    B.assign(N, vector<int>(M));
    C.assign(N, vector<int>(M));
    
    for(int i = 0; i < N; i++){
        for(int j = 0 ; j < M; j++){
            scanf("%1d", &A[i][j]);
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0 ; j < M; j++){
            scanf("%1d", &B[i][j]);
            if(A[i][j] == B[i][j]){
                C[i][j] = 0;
            }else{
                C[i][j] = 1;
                change = true;
            }
        }
    }

    if(N >= 3 && M >= 3 && change){
        bool complete = false;
        for(int i = 0; i <= N-3; i++){
            for(int j = 0; j <= M-3; j++){
                for(int k = i; k < i+3; k++){
                    for(int q = j; q < j+3; q++){
                        if(C[k][q] == 1) C[k][q] = 0;
                        else C[k][q] = 1;
                    }
                }
                
                ans++;
                if(check()){
                    complete = true;
                    break;
                }
            }
            if(complete) break;
        }
        
        if(!check()) ans = -1;
    }else{
        for(int k = 0; k < N; k++){
            for(int j = 0; j < M; j++){
                if(A[k][j] != B[k][j]){
                    ans = -1;
                    break;
                }
            }
        }
    }
    
    
    cout << ans << endl;
}

bool check(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M - 1; j++){
            if(C[i][j] != C[i][j+1]){
                return false;
            }
        }
    }


    return true;
}
