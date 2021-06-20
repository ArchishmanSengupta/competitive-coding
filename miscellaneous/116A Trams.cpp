
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t=0,sum=0;
    cin>>n;
    while(n--!=0){

        int a,b;
        cin>>a>>b;
        sum=sum-a;
        sum=sum+b;
        if(sum>t){
            t=sum;
        }
}
cout<<t<<endl;
return 0;
}
