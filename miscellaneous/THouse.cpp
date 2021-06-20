#include<bits/stdc++.h>
using namespace std;
#define int long long int


int sol(){
	int mod=1e9+7;
	int n,w;
	cin>>n>>w;
	int i,j,k,l;
	
	//adjancy list
	vector<vector<int> > edge(n+1);
	for(int i=0;i<n-1;i++){
		cin>>j>>k;
		
		edge[j].push_back(k);
		edge[k].push_back(j);
	}
	
	std::function<int(int,int)> dfs;
	//essentially taking two args as
	// particular node and p is its
	// immediate parent
	dfs=[&](int v,int p)
	{
		vector<int> b; 
		// assignment of 1 to immediate child
		int res=1; //particular node has beeen assigned value 1
		// assigning children of b the value 1
		for(auto it: edge[v]){
			if(it==p)
				continue;
				//it is immediate child, v parent
			b.push_back(dfs(it,v));
		}
		sort(b.begin(),b.end(),greater<int>());
		int x=1;
		for(auto it:b){
			//iteration it will go in decreasing order
			res+=(it*x);
			x++;
		}
		return res;
	};
	// the parent of 1 is not defined thats why 1,-1
	int sum=dfs(1,-1)%mod;
	// we wanted node as val w
	//so we multiply it
	sum=(w*sum)%mod;
	
	cout<<sum<<endl;
}
signed main(){
int t; cin>>t;
while(t--){
	sol();
}	
return 0;
}
