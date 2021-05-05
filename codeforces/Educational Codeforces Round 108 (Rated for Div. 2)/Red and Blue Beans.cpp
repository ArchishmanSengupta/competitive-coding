#include<bits/stdc++.h>
using namespace std;
 
int main(){
	long long t; cin>>t;
	while(t--){
		
		long long r,b,d;
		cin>>r>>b>>d;
		long long d1=abs(r-b);
		long long mini=min(r,b);
		double res=(double)d1/(double)mini;
		if(res>d){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
