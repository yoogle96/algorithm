int arr[201];
string isValid(string s) {
    int size = s.size();
    bool flag = true;
    for(int i = 0; i < size; i++) { 
        arr[s[i]]++;
    }
    int ch = 0, idx = 0;
    int cnt = 0;
    for(int i = 97; i <= 122; i++) {
        if(arr[i] != 0) {
            ch = arr[i];
            idx = i;
            break;
        }
    }
    for(int i = idx + 1; i <= 122; i++) {
        if(arr[i] == 0) continue;
        if(ch != arr[i]) {
            if(cnt == 1) {
                flag = false;
                break;
            }
            if(abs(ch - arr[i]) > 1 && arr[i] != 1) {
                flag = false;
                break;
            }else {
                cnt++;
            }
        }
    }
    if(flag) return "YES";
    else return "NO";
}
