#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int dn=2*n;
	int arr[dn]; // dn=2*n;
	for(int i=0;i<dn;i++)
	cin>>arr[i]; 
	sort(arr,arr+dn);
	for(int i=0;i<n;i++){
	cout<<arr[i]<<" "<<arr[dn-1-i]<<" ";
	}
	cout<<endl;
	}
	return 0;
}