// https://www.hackerrank.com/challenges/two-strings/problem

string twoStrings(string s1, string s2) {
    // int  arr[200] = {0, };
    vector<int> arr1(200, 0);
    vector<int> arr2(200, 0);
    bool flag = false;
    for(int i = 0; i < s1.size(); i++) {
        arr1[s1[i]]++;
    }
    for(int i = 0; i < s2.size(); i++) {
        arr2[s2[i]]++;
    }
    for(int i = 97; i <= 122; i++) {
        if( (arr1[i] >= 1) && (arr2[i] >= 1) ) {
            flag = true;
            break;
        }
    }
    if(flag) return "YES";
    else return "NO";
}