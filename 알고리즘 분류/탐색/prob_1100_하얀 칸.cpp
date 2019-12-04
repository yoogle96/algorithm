#include <iostream>
#include <string>

using namespace std;

string board[8];
int ans;

int main(){
    for(int i = 0 ; i < 8; i++ ){
        cin >> board[i];
    }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(i % 2 == 0){
                if(j % 2 == 0 && board[i][j] == 'F'){
                    ans++;
                }
            }else{
                if(j % 2 != 0 && board[i][j] == 'F'){
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
}