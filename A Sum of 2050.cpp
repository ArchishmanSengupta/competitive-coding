#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(n%2050==0){
			ll res=0;
			n/=2050;
			while(n){
				res+=n%10;
				n/=10;
			}
			cout<<res<<"\n";
			
		}
		else{
			cout<<"-1"<<"\n";
		}
	}
	return 0;
}