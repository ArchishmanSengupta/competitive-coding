#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		
		vector<int> cap,mar;
		
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			cap.push_back(x);
		}
		
	     
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			mar.push_back(x);
		}
		int capN=cap[n-1];
		 int marN=mar[n-1];
		
		for(int i=1;i<n;i++)
		{
		    int spaceLeft = cap[i]-mar[i];
		    
		    if(spaceLeft<mar[i-1] && spaceLeft!=0)
		    {
		        mar[i] = mar[i]+spaceLeft;
		    }
		    else if(spaceLeft>=mar[i-1])
		    {
		        mar[i] = mar[i]+mar[i-1];
		    }
		}
		
		cout<<mar[n-1]<<endl;
	}
		
	
	return 0;
}