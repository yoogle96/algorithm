#include <bits/stdc++.h>
using namespace std;
int n, num;
int main() {
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    map<int, int> myMap;

    cin >> n;
    while(n--) {
        cin >> num;
        myMap[num]++;
    }

    for(auto m : myMap) {
        cout << m.first << " ";
    }
}

// #include <bits/stdc++.h>
// using namespace std;
// int n, num, arr[2001];
// int main() {
//     ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//     cin >> n;
//     while(n--) {
//         cin >> num;
//         if(num < 0) {
//             arr[num + 1000]++;
//         }else {
//             arr[num + 1000]++;
//         }
//     }

//     for(int i = 0; i <= 2000; i++) {
//         if(i < 1000) {
//             if(arr[i] > 0) cout << i - 1000 << " ";
//         }else {
//             if(arr[i] > 0) cout << i - 1000 << " ";
//         }
//     }
// }