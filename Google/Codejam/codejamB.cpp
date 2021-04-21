#include<bits/stdc++.h>
using namespace std;

//Code by CaptainNeo007
int main()
{
	int t,i,x,y;
	string s; 
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>x>>y;
		cin>>s;
		int c=0,bef='I';
		int len=s.length();
		for(int loop=0;loop<len;loop++)
		{
			if(s[loop]=='C')
			{
				if(bef=='J')
				{
					c=c+y;
				}
				bef='C';
			}
			else if(s[loop]=='J')
			{
				if(bef=='C')
				{
					c=c+x;
				}
				bef='J';
			}
			else
			{	}
		}
		cout<<"Case #"<<i<<": "<<c<<"\n";	
	}
	return 0;
}
