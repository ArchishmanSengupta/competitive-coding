#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a,b;
	int mx=0,mn=10001;
	for(int i=0;i<n;i++){
		cin >>a;
		mx=max(mx,a);
	}
	for(int i=0;i<n;i++){
		cin>>b;
		mn=min(mn,b);
	}
	
cout<<max(0,mn-mx+1)<<endl;
}

