#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int store=0;
    for(int i=0;i<k;i++){
      while(a[store]==0)
      {
        store++;
      }
      if(store>=n){
        break;
      }
      a[store]--;
      a[n-1]++;
    }
    for(int i=0;i<n;i++){
	
      cout<<a[i]<<" ";}
      cout<<"\n";
}
 
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
	}
	return 0;
}
