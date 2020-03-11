#include <bits/stdc++.h>
using namespace std;
int k, n, arr[100001], idx, leftt, rightt;
int main() {
	cin >> n >> k;
	for(int i = 1; i <= n; i++) {
		cin >> arr[i];
		if(arr[i] == 1) idx = i;
	}
	
	leftt = (idx - 1);
	rightt = (n - idx);
	int minn = 2147000000;
	for(int i = 0; i < k; i++) {
		int leftCnt;
		int rightCnt;
		if(leftt % (k - 1) == 0 && leftt >= (k - 1)) {
			leftCnt = leftt / (k - 1);
		}else {
			leftCnt = leftt / (k - 1) + 1;
		}
																																	
		if(rightt % (k - 1) == 0 && rightt >= (k - 1)) {
			rightCnt = rightt / (k - 1);
		}else {
			rightCnt = rightt / (k - 1) + 1;
		}
		int ans = leftCnt + rightCnt;
																																
		minn = min(minn, ans);
		leftt--;
		rightt++;
	}
 	cout << minn << endl;
	
	
	return 0;
}