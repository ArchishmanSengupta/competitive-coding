#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int q, p;
		cin>>q>>p;
		double ans=q*p;
		cout<<fixed;
		cout<<setprecision(6);
		if(q>1000)
		{
			cout<<ans-ans*0.1<<endl;
		}
		else
		cout<<ans<<endl;
	}
	return 0;
}
