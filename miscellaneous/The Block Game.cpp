#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int det=0;
		char ch[7];
		cin>>ch;
		if(ch[0]==0)
		det=1;
		else
		{
			for(int i=0;i<int((strlen(ch)+1)/2);i++){
				if(ch[i]!=ch[strlen(ch)-i-1]){
					det=1;
					break;
				}
			}
		 } 
		 if(det==0)
		 cout<<"wins"<<endl;
		 else
		 cout<<"loses"<<endl;
	}
}
