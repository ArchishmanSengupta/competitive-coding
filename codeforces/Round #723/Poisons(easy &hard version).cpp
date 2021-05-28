#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n;
	cin>>n;
	//PriorityQueue maybe in ascending ? Yes thats the correct ans
	ll res[n];
	for(int i=0;i<n;i++)
		cin>>res[i];
	priority_queue<ll,vector<ll>,greater<ll>> q;
	ll count=0, val=0;

	for(int i=0;i<n;i++){
		val=val+res[i];
		count=count+1;
		if(res[i]<0)
			q.push(res[i]);
		if(val<0){
			val-=q.top();
			q.pop();
			count--;
		}
	}
	cout<<count<<endl;
	return 0;
	//lmao this works
}