#include <bits/stdc++.h>
using namespace std;
int i,n,k,a[200005];
int main() {
    cin>>n>>k;
	for(a[0]=1;cin>>a[++i];);
	sort(a,a+n+1);
	cout<<(a[k]!=a[k+1]?a[k]:-1);
}