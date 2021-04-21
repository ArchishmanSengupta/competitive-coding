#include<bits/stdc++.h>
using namespace std;
int main()
{
	short t,n;
	cin>>t;
	for(short i=0;i<t;i++)
	{
		cin>>n;
		short a[n];
		for(short j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int ans=0;
		for(short j=0;j<n-1;j++)
		{
			short mini=128,ind=-1;
			for(short k=j;k<n;k++)
			{
				if(a[k]<mini)
				{
					mini=a[k];
					ind=k;
				}
			}
			reverse(a+j,a+ind+1);
			ans+=(ind-j)+1;
		}
		cout<<"Case #"<<i+1<<": "<<ans<<endl;
	}
	return 0;
	
}
