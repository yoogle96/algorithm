#include <iostream>
using namespace std;
int N;
#include <iostream>
using namespace std;
int arr[50001];
int main() {
    cin >> N;
    for(int i = 1; i <= N; i++) {
        for(int j = i; j <= N; j+=i) {
            arr[j] += 1;
        }
        cout << arr[i] << " ";
    }
}
/* O(N^2) 시간 복잡도 */
// int main() {
//     cin >> N;
//     for(int i = 1; i <= N; i++) {
//         int cnt = 0;
//         for(int j = 1; j <= i; j++) {
//             if(i % j == 0) cnt++; 
//         }

//         cout << cnt << " ";
//     }
// }