#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define archiezzz ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve(){
	ll n,m,res=0,x;cin>>n>>m;
	vector<ll> v(n+1,1);
	for(int i=2;i<=n;i++){
		x=m%i;
		res=res+v[x];
		for(int j=x;j<=n;j=j+i)
		{
			v[j]++;
		}
	}
	cout<<res<<"\n";
	
}
int main(){
	archiezzz;
	int t; cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
