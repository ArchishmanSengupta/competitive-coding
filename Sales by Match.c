#include<stdio.h>
int main()
{
    int n, count=0,i,j,sum=0;
    scanf("%d",&n);
    int c[n],co[100];
    scanf("%d",&c[i]]);
    //can do by frequency array
    for(j=1;j<100;i++)// j is for colors
    {
        for(i=0;i<n;i++)
        if(j==c[i])
        count++;
        co[j]=count;
        count=0;
    }
    for ( i = 1; i <=100; i++)
    {
        j=co[i]/2;
        sum=sum+j;
    }
    printf("%d",sum);
    return 0;
}
