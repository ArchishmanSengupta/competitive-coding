#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,count=0;
        cin>>a>>b>>c>>d;
        if(a ==b && c==d)
        {
            count=1;
        }
        else if(a==c && b==d) {
            count=1;
        }
        else if(a==d && b==c) {
            count=1;
        }
        else{
            count=0;
        }
        if(count==1)
        {cout<<"YES"<<endl;}
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
