#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,p;
	string s;
	cin>>n>>k;
	vector<int> vec(n,0);
	int count=0;
	for(int i=0;i<k;i++)
	{
		cin>>s;
		//check for "CLICK" "CLOSEALL"
		//the nearest is "CLI"
		if(s.find("CLI")!=string::npos)
		{
			cin>>p;
			if(vec[p-1]){
				vec[p-1]=0;
				count--;
			}
			else
			{
				vec[p-1]=1;
				count++;
			}
		}
		//CLOSE ALL
		else{
			for(int i=0;i<n;i++)
			{
				//initializing all values to 0
				vec[i]=0;
			}
			count=0;
		}
		cout<<count<<endl;		
	}
}
