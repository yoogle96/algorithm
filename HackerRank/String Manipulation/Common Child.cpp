// 성공 코드
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

// 실패 코드
// int commonChild(string s1, string s2) {
//     int cnt = 0;
//     int size = s1.size();
//     int idx = 0;
//     for(int i = 0; i < size; i++) {
//         for(int j = idx; j < size; j++) {
//             if(s2[i] == s1[j]) {
//                 cnt++;
//                 idx = j + 1;
//                 break;
//             }
//         }
//     }
//     return cnt;
// }
