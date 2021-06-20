#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n;
	cin>>n;
	ll a,sum=0;
	for(ll i=0;i<n-1;i++)
	{
		cin>>a;
		sum=sum+a;
	}
	cout<<(n*(n+1)/2)-sum<<endl;
	return 0;
	
}
