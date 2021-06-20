#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,x=0;//x for how much down or up
    scanf("%d",&n);
    int b[n];
    char a[n];
    scanf("%s",a);
    for ( i = 0; i < n; i++)
    {
        if(a[i]=='U)
        {
            x++;
            b[i]=x;
        }
        else
        {
            x=x-1;
            b[i]=x;
        }
    }
    x=0;
    for(i=0;i<n;i++)
    {
        if(b[i]<0&&b[i+1]==0)
        x++;
    }
    printf("%d",x);
    return 0;
}
