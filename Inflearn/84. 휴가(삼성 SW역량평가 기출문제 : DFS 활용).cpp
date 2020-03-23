#include <iostream>
#include <vector>
using namespace std;
int N, a, b, answer, maxx = -2147000000;
vector< pair<int, int> > v(16);

void DFS(int n, int sum) {
    if(n == N + 1) {
        if(maxx < sum) maxx = sum;
    }
    else {
        if(n + v[n].first <= N + 1) DFS(n + v[n].first, sum + v[n].second);
        DFS(n + 1, sum);
        // if(remain == 0 && n + remain < N) {
        //     remain = v[n].first;
        //     sum += v[n].second;
        //     DFS(n + 1, remain - 1, sum);
        // } else {
        //     DFS(n + 1, remain - 1, sum);
        // }
    }
}

int main() {
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cin >> a >> b;
        v[i] = make_pair(a, b);
    }

    for(int i = 1; i <= N; i++) {
        DFS(i, 0);
    }

    cout << maxx;
}