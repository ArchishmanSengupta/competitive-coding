#include<bits/stdc++.h>
using namespace std;
#define pb push_back()
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int q;
	cin>>q;
	bool flip=0;
	while(q--){
		int t,a,b;
		cin>>t>>a>>b;
		if(t==2){
			flip^=1;
	}
	else{
		if(!flip){
			swap(s[a-1],s[b-1]);
		}
		else{
			if(a<=n)
			a+=n;
			else
			a-=n;
			if(b<=n)
			b+=n;
			else
			b-=n;
			swap(s[a-1],s[b-1]);
		}
	}
	string x,y;
	for(int i=0;i<n;i++){
		x.push_back(s[i]);
	}
	for(int i=n;i<2*n;i++){
		y.push_back(s[i]);
	}
	if(flip){
		swap(x,y);
	}
	cout<<x<<y;
	return 0;

}}
