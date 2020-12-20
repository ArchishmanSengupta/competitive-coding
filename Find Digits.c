#include<stdio.h>
int main()
{
    int t,d,count=0,i;
    long long int n,x;
    scanf("%d",&t);
    for ( i = 0; i < t; i++)
    {
        scanf("%lld",&n);
        x=n;
        while(n!=0)
        {
            d=n%10;
            if(d!=0)
            {
            if(x%d==0)
            count++;
            }
            n=n/10;
        }
        printf("%d\n",count);
        count=0;
    }
    
}
