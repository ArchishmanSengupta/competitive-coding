#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k1,k2;
        cin >> n >> k1 >> k2;

    int w,b;
    cin>>w>>b;
    int totalw=min(k1,k2);
    totalw+=abs(k1-k2)/2;

    k1=n-k1;
    k2=n-k2;

    int totalb =min(k1,k2);

    totalb +=abs(k1-k2)/2;
    if(w<=totalw && b<=totalb)
    {
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    }
    return 0;
}
