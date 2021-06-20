#include<bits/stdc++.h>

int main()
{
	using namespace std;
	int t{1};
	bool ap{1};
	while(t--)
	{
		cin>>t;
		if(t==0)
		break;
		else
		{
			int arr[t];
			int in[t];
			for(int i{0};i<t;i++)
			{
				cin>>arr[i];
			}
			for(int j{0};j<t;j++)
			{
				in[arr[j]-1]=j+1;
			}
			for(int k{0};k<t;k++)
			{
				if(arr[k]!=in[k])
				{
					ap=0;
					break;
				}
			}
			if(ap==0)
			{
				cout<<"not ambiguous"<<endl;
				ap=1;
			}
			else
			cout<<"ambiguous"<<endl;
		}
	}
	return 0;
}
