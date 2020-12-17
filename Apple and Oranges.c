#include<stdio.h>
int main()
{
    int s,t,a,b,m,n,d,apple=0,orange=0;
    scanf("%d%d",&s,&t);
    scanf("%d%d",&a,&b);
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&d);
        if(a+d>=s && a+d<=t)
        apple++;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&d);
        if(b+d>=s && b+d<=t)
        orange++;
    }
    printf("%d\n%d",apple,orange);
    return 0;
}
