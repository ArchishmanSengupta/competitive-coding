#include <bits/stdc++.h>
using namespace std;
int a[1000000] = {0};
int j[1000000] = {0};
void seive(){
	int n = 1000000;
	int nr = 0;
	for(int i=2; i*i <= n; i++){
		if(a[i]==0){
			for(int j=i*i; j<=n; j+=i){
				a[j] = 1;
			}
		}
	}
	
	for(int i=3; i<=1000000-2; i++){
        if(a[i]==0){
            if(a[i+2]==0){
                nr++;
            }
        }
        j[i+2]=nr;
    }
}


int main() {
	// your code goes here
	seive();
	int t; 
	cin>>t;
	while(t--){
	    int n; 
	    cin>>n;
	    if(n < 5)
	        cout<<"0\n";
	    else
	        cout<<j[n]<<endl;
	}
	return 0;
}





