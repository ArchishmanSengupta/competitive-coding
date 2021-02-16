#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,c=0;
		cin>>n>>k;
		for(int i=2;i<=k;i++)
		{
			if(c<n%i)
			c=n%i;
		}
		cout<<c<<endl;
	}
}
