
// ON C++17 compiler


#include<bits/stdc++.h>
#define ll long long 
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	ll n,i=1,result=1,len;
	cin>>n;
	pair<ll,ll> check[n];
	for(auto &[h,k]: check)
	{
		h=i++;
		cin>>k;
	}
	vector<pair<ll,ll> >convex{check[0],check[1]};
	for(i=2;i<n;i++)
	{
		//for the cross product of h,k coordinates
		auto crossPro=[&]()
		{
			len=convex.size();
			//Initial points(h,k)
			auto [h,k]=convex[len-2];
			// check for the vector length h,k with h1,k1
			auto [h1,k1]=convex[len-1];
			//same goes for h2,k2
			auto [h2,k2]=check[i];
			return (h1-h)*(k2-k) -(h2-h)*(k1-k);
		};
		while(convex.size()>1 and crossPro()>=0)
		convex.pop_back(); //deleting the non required vector
		
		result=max(result,check[i].first -convex.back().first);
		convex.push_back(check[i]);
	}
	
	cout<<result<<"\n";	
}
return 0;
}
