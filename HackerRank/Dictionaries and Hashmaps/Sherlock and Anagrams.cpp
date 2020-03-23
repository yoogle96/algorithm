// https://www.hackerrank.com/challenges/sherlock-and-anagrams/problem

int sherlockAndAnagrams(string s) {
    int cnt = 0;
    for(int i = 1; i < s.size() - 1; i++) {
        for(int j = 0; j < s.size(); j++) {
            for(int k = j + 1; k < s.size(); k++) {
                vector<int> v1(200, 0);
                vector<int> v2(200, 0);
                string temp1 = s.substr(j, i);
                string temp2 = s.substr(k, i);
                for(int w = 0; w < temp1.size(); w++) {
                    v1[temp1[w]]++;
                    v2[temp2[w]]++;
                }
                bool flag = true;
                for(int y = 97; y <= 122; y++) {
                    if(v1[y] != v2[y]) {
                        flag =false;
                        break;
                    }
                }
                if(flag) cnt++;
            }
        }
    }
    return cnt;
}

