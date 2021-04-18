#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int i,n,x,maxi,mini,c=0;
		vector<long long int> in;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			in.push_back(x);
		}
		for(int i=0;i<n-1;i++)
		{
			maxi=max(in[i],in[i+1]);
			mini=min(in[i],in[i+1]);
			while(mini*2 <maxi)
			{
				c++;
				mini=mini*2;
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}
