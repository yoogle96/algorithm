long substrCount(int n, string s) {
    long iPalCount = n;
    long iSpecialCnt = 0, iCurrCount = 0, iPrevCount = 0, iPrevPrevCount = 0;
    
    for(int i = 1; i < n; i++) {
        char cPrev = s[i-1];
        char cCurr = s[i];
        
        if ( cPrev == cCurr ) {
            iCurrCount++;
            iPalCount += iCurrCount;
            
            if ( iSpecialCnt > 0 ) {
                iSpecialCnt--;
                iPalCount++;
            }
        }
        else {
            iCurrCount = 0;
            if ( i > 1 && (s[i-2] == cCurr) ) {
                iSpecialCnt = iPrevPrevCount;
                iPalCount++;
            }
            else {
                iSpecialCnt = 0;
            }
        }
        
        if ( i > 1 ) {
            iPrevPrevCount = iPrevCount;
        }
        
        iPrevCount = iCurrCount;
    }
    
    return iPalCount;
}

// 실패 코드
// int arr[200];
// long substrCount(int n, string s) {
//     int cnt = n;
//     for(int i = 2; i <= n; i++) {
//         for(int k = 0; k < i; k++) arr[s[k]]++;
//         if(arr[s[0]] == i) cnt++;
//         else {
//             string temp = s.substr(0, i);
//             if(arr[temp[temp.size() / 2]] == 1) cnt++;
//         }
//         for(int j = 1; j < n - i + 1; j++) {
//             arr[s[j - 1]]--;
//             arr[s[j + i - 1]]++;
//             if(arr[s[j + i - 1]] == i) cnt++;
//             else {
//                 string temp = s.substr(j, i);
//                 if(arr[temp[temp.size() / 2]] == 1) cnt++;
//             }
//         }
//     }
//     return cnt;

//     // for(int i = 2; i <= n; i++) {
//     //     for(int j = 0; j < n - i + 1; j++) {
//     //         string temp = s.substr(j, i);
//     //         bool flag = true;
//     //         char ch = temp[0];
//     //         int tmSize = temp.size();
//     //         for(int k = 1; k < tmSize; k++) {
//     //             if(ch != temp[k]) {
//     //                 if(tmSize % 2 != 0 && k == tmSize / 2) continue;
//     //                 else {
//     //                     flag = false; 
//     //                     break;
//     //                 }
//     //             }
//     //         }
//     //         if(flag) cnt++;
//     //     }
//     // }

//     return cnt;
// }