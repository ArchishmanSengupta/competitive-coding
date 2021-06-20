#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count1=0,count2=0;
	cin>>n;
	while(n--)
	{
		int array[n],i;
		cin>>array[i];
		if(array[i]%2==0)
		count1++;
		else
		count2++;
	}
	if(count1>count2)
	cout<<"READY FOR BATTLE\n";
	else
	cout<<"NOT READY\n";
	return 0;
}
