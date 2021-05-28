#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    	ll n;
		cin>>n;
		ll temp=n%11;
		ll check1=temp*111;
		ll check=(n-check1);
		if(check1<=n and (check)%11==0){
		    cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    solve();
}
	return 0;
}