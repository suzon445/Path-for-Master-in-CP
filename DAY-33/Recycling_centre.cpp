#include<bits/stdc++.h>
using namespace std;
long long a[30];
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	int T;
	long long n,i,c,ans;
	for(cin>>T;T>0;T--)
	{
		cin>>n>>c;
		for(i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		ans=0;
		for(i=n-1;i>-1;i--)
		{
			if(a[i]>c)ans++;
			else c/=2;
		}
		cout<<ans<<'\n';
	}
	return 0;
}