#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int d;
		cin>>d;
		if(d<9) cout<<d+1<<"\n";
	    else cout<<d%9+1<<"\n";
	}
	return 0;
}

