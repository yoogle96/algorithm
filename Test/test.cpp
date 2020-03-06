#include <iostream>
#include <string>
using namespace std;
static int T[5001][5001];
int commonChild(string s1, string s2) {
    int m = s1.size();
    int n = s2.size();
    
    for(int i = 0; i <= m; i++ ){
        for(int j = 0; j <= n; j++ ){
            if(i == 0 || j == 0){
                T[i][j] = 0;
            }else if(s1[i-1]==s2[j-1]){
                T[i][j] = 1+T[i-1][j-1];
            }else{
                T[i][j] = max(T[i][j-1], T[i-1][j]);
            }
        }
    }
    
    return T[m][n];
}

int main() {
    string s1 = "WEWOUCUIDGCGTRMEZEPXZFEJWISRSBBSYXAYDFEJJDLEBVHHKS";
    string s2 = "FDAGCXGKCTKWNECHMRXZWMLRYUCOCZHJRRJBOAJOQJZZVUYXIC";
    cout << commonChild(s1, s2);
}