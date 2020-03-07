#include<bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
	int T;cin>>T;
	while(T--){
		string s,t,ans;
		cin>>n>>s;int pos=1;
		ans=s;
		t=s;
		string k,q;
		for(int i=0;i<n;i++){
			k=t.substr(i,n-i+1);
			q=t.substr(0,i);
			if((n-i)%2==1)reverse(q.begin(),q.end());
			k+=q;
			if(k<ans)ans=k,pos=i+1;
		}
		cout<<ans<<endl;
		cout<<pos<<endl;
		
	}
}