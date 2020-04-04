#include <bits/stdc++.h>
using namespace std;
vector<int> answer;
int arr[501];
bool cmp(pair<int, double> p1, pair<int, double> p2) {
    if(p1.second != p2.second) {
        return p1.second > p2.second;
    }else {
        return p1.first < p2.first;
    }
}

vector<int> solution(int N, vector<int> v) {
    int mSize = v.size();
    for(int i = 0; i < mSize; i++) {
        arr[v[i]]++;
    }
    vector< pair<int, double> > vp;
    for(int i = 1; i <= N; i++) {
        double avg;
        if(arr[i] == 0) avg = 0;
        else avg = (double)arr[i] / (double)mSize;
        vp.push_back(make_pair(i, avg));
        mSize -= arr[i];
    }
    sort(vp.begin(), vp.end(), cmp);
    for(auto t : vp) {
        answer.push_back(t.first);
    }
    return answer;
}