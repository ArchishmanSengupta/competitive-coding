#include <bits/stdc++.h>
#include<cmath>
using namespace std;

#define ll long long

int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        ll a[n][n];
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j<i+1; j++){
                cin>>a[i][j];
            }
        }
        for(int i=n-2; i>=0; i--){
            for(int j=0; j<i+1; j++){
                a[i][j]+=max(a[i+1][j], a[i+1][j+1]);
            }
        }
        cout<<a[0][0]<<endl;
    }
    cout<<endl;
	return 0;
}
