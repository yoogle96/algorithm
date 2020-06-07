#include <bits/stdc++.h>
using namespace std;

int a, total, cnt;
int main() {
    
    double avg;
    cin >> a;
    vector<int> v(a);
    for(int i = 0; i < a; i++) {
        cin >> v[i];
        total += v[i];
    }
    avg = (double)total / (double)a;
    for(int i = 0; i < a; i++) if(v[i] > avg) cnt++;
    cout << fixed;
    cout.precision(1);
    cout << avg << " " << cnt << endl;
}