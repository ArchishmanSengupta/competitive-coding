#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int I=0,N=0,Y=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='N')
			{
				N++;
			}
			if(s[i]=='Y')
			{
				Y++;
			}
			if(s[i]=='I')
			{
				I++;
			}
		}
		if(N==n ||(Y>0 &&I>0))
		{
			cout<<"NOT SURE"<<endl;
		}
		else if(I>0 && Y==0)
		{
			cout<<"INDIAN"<<endl;
		}
		else{
			cout<<"NOT INDIAN"<<endl;
		}
	}
	return 0;
}
