#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const unsigned int MOD=1e9;

using namespace std;

bool check(ll a){
  if(a>=0){
    ll sq=sqrt(a);
    return (sq*sq==a);
  }
  return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	
  int n;
  cin>>n;
  bool arin=false;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    if(!check(a)){
      arin=true;
    }
  }
  if(arin){
    cout<<"YES\n";
  }
  else{
    cout<<"NO\n";
  }
}
}