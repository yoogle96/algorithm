#include <iostream>
using namespace std;
int T, N, M, x, y;
int gcd(int a, int b){
	while(b!=0){
		int r = a%b;
		a= b;
		b= r;
	}
	return a;
}

int lcm(int a, int b){
    return a * b / gcd(a,b);
}

int main() {
    cin >> T;
    while(T--) {
        cin >> M >> N >> x >> y;
        int cnt = x % (M + 1);
        int tempY = x;

        for(int i = 0; i < N; i++) {
            int ty = tempY % N == 0 ? N : tempY % N;
            if(ty == y) {
                break;
            }

            tempY = ty + M;
            cnt += M;
        }
        cout << (cnt > lcm(M, N) ? -1 : cnt) << endl;
    }
}


// int main() {
//     cin >> T;
//     while(T--) {
//         cin >> M >> N >> x >> y;
//         if(M == x && N == y) {
//             cout << lcm(M, N) << endl;
//             continue;
//         }
//         int answer = y;
//         int endDay = lcm(M, N);
//         int curX = 0;
//         if(y <= M) curX = y;
//         else {
//             curX = (y % M == 0) ? M : y % M;  
//         }
//         bool flag = true;
//         while(1) {
//             if(answer > endDay) {
//                 flag = false;
//                 break;
//             }
//             if(curX == x) {
//                 break;
//             }else {
//                 curX = (curX + N) % M;
//                 answer += N;
//             }
//         }
//         if(flag) cout << answer << endl;
//         else cout << -1 << endl;
//     }
// }
