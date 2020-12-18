#include<stdio.h>
int main()
{
    int n, i,j,k,sum=0,count=0;
    scanf("%d%d",&n,&k);
    int ar[n];
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            sum = ar[i]+ar[j];
            if(sum%k==0)
            count++;
        }
    }
    printf("%d",count); 
    return 0; 
}
