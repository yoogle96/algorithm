#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, k; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	cin >> k;
	
	int mid;
	int lt = 0, rt = n - 1;
	while(lt <= rt) {
		mid = (lt + rt) / 2;
		if(v[mid] == k) {
			break;
		}else if(v[mid] < k){
			lt = mid + 1;
		} else {
			rt = mid - 1;
		}
	}
	cout << mid + 1 << "\n";
	return 0;
}