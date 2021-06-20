#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    string n1,n2;
    cin>>n1>>n2;
    for(ll i=0;i<n1.length();i++)
    {
        if(n1[i]==n2[i])
        {
            n1[i]='0';
        }
        else
        {
            n1[i]='1';
        }
    }
    cout<<n1<<"\n";
    return 0;
}

//copyright 2021 @Archishman Sengupta
