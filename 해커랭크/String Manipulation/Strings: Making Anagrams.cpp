int arr1[200], arr2[200];
int makeAnagram(string a, string b) {
    int cnt = 0;
    int aSize = a.size();
    int bSize = b.size();
    for(int i = 0; i < aSize; i++) { 
        arr1[a[i]]++;
    }
    for(int j = 0; j < bSize; j++) {
        arr2[b[j]]++;
    }
    for(int i = 97; i <= 122; i++) { 
        if(arr1[i] != arr2[i]) {
            cnt += abs(arr1[i] - arr2[i]);
        }
    }
    return cnt;
}