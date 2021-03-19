#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
// #define pb        push_back
// #define loop(i,a,b)  for(int i=a;i<b;i++)
// #define sz(x)    (int)((x).size())

int main()
{
    //              0000 yes 1111 yes 
    //           adjacent
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.length();
        bool v=false;
        for(ll i=1;i<n;i++)
        {
            if(s[i]==s[i-1] and s[i]=='1') v=true;

            if(v and s[i]==s[i-1] and s[i]=='0')
            {
                cout<<"NO\n";
                goto h;
            }
        }
        cout<<"YES\n";
        h:;

        }
    return 0;
}
