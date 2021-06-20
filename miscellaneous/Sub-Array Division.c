#include<stdio.h>
int main()
{
    int d,m,n,i,j,sum=0,flag=0;//(for count);
    scanf("%d",&n);
    int s[n];
    for(i=0;i<n;i++)
    scanf("%d",&s[i]);
    scanf("%d %d",&d,&m);
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        sum=sum+s[i+j];//J counts m times
        if(sum==d)
        flag++;
    }
    printf("%d",flag);
    return 0;
}
