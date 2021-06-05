#include<bits/stdc++.h>
using namepsace std;
#define ll long long 


bool solve(string s, int n)
{
	ll n,m;
	 cin>>n>>m;
	 string s;
	 for(int i=0;i<n;i++){
	 	cin>>s;
	 }
	 for(int i=1;i<n-1;i++){
	 	if(s[i]=='0'){
	 		if(s[i-1]=='0' and s[i+1]=='1') {return 1;}
	 	}
	 	if(a[i-1]=='1' and s[i+1]=='0'){ return 1;
	 	}
	 }
	 if(s[1]=='1' and s[0]=='0'){
	 	return 1;
	 }
	 if(s[n-1]=='0' and s[n-2]=='1')
	 	return 1;
	 return 0;
}
int main(){
	int t; cin>>t;
	while(t--){
		cout<<solve(s,n)<<endl;

	}
	return 0;
}