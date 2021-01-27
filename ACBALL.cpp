#include<bits/stdc++.h>
using namespace std; 

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		string one, two;
		cin>>one>>two;
		for(int i=0;i<one.length();i++)
		{
			if(one[i]==two[i])
			{
				if(one[i]=='W')
				cout<<'B';
				else
				cout<<'W';
			}
			else
			cout<<'B';
		}
		cout<<endl;
	}
	return 0;
}
