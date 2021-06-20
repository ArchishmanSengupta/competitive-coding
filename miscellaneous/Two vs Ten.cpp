#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int x;
		cin>>x;
		if(x%5==0)
		{
			if(x%10==0)
			cout<<0<<"\n";
			else
			cout<<1<<"\n";
		}
		else
		cout<<-1<<"\n";
	}
	return 0;
}
