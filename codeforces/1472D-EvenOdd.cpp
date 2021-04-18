#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        std::vector<ll>arr(n) ;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.rbegin(),arr.rend());
        ll score(0);
        for(ll i=0;i<n;i++)
        {
            if(i%2==0 && arr[i]%2==0)
            {
                score+=arr[i];
            }
            if(i%2==1 && arr[i]%2==1)
            {
                score-=arr[i];
            }
        }
            if(score>0)
            {
                cout<<"Alice"<<"\n";
            }
            else if(score<0){
                cout<<"Bob"<<"\n";
            }
            else
            {
                cout<<"Tie"<<"\n";
            }
    }
}