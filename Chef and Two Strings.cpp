#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s1,s2;
    int min=0,max=0,space=0;
    cin>>s1>>s2;
    int len=s1.size();
    for(int i=0;i<len;i++)
    {
        if((s1[i]=='?') ||(s2[i]=='?'))
        {
            space++;
        }
        else if(s1[i]==s2[i]){
            min++;
        }
    }
    cout<<len-min-space<<" "<<len-min<<"\n";
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
        int x;
        cin>>x;
        while(x--)
        {
            solve();
        }
        return 0;
}
