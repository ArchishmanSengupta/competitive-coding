#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t,n,q;
	cin>>t>>n>>q;
	while(t-- !=0)
	{
		vector<ll> a;
		cout<<"1 2 3"<<"\n";
		ll size=3,p;
		cin>>p;
		if(p==2)
		{
			a.push_back(1);
			a.push_back(2);
			a.push_back(3);
		}
		else{
			a.push_back(2);
			a.push_back(1);
			a.push_back(3);
		}
		for(ll i=4;i<=(n);i++)
		{
			ll u=0,v=size-1;
			while(u<v)
			{
				ll mid=u+((v-u)/2);
				cout<<a[mid]<<" "<<a[mid+1]<<" "<<(i)<<"\n";
				cin>>p;
				if(p==a[mid])
				{
					v=mid;
				}
				else if(p==a[mid+1]){
					u=mid+1;
				}
				else{
					a.insert(a.begin()+mid+1,i);
					size++;
					break;
				}
			}
			if(size!=i)
			{
				if(u==0)
				{
					a.insert(a.begin(),i);
				}
				else{
					a.push_back(i);
				}
				size++;
			}
		}
		for(auto this: a)
		{
			cout<<this<<" ";	
		}
		cout<<endl;
		cin>>p;
		if(p==-1)
		{
			break;
		}
	}
}
