#include <iostream>

using namespace std;
const int MAX = 8;
int N, M;
bool visited[MAX+1];
int arr[MAX+1];


void dfs(int cnt){
    if(cnt == M){
        for(int i = 0; i < M; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for(int i = 1; i <= N; i++){
        if(!visited[i]){
            visited[i] = true;
            arr[cnt] = i;
            dfs(cnt + 1);
            visited[i] = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    dfs(0);
}