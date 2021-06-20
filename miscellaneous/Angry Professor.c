#include<stdio.h>
int main()
{
    int t,n,k,i,j,count;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        count=0;
        scanf("%d%d",&n,&k);
        int a[n];
        for(j=0;j<n;j++)
        scanf("%d",&a[j]);
        for ( j = 0; j < n; j++)
        {
            if(a[j]<=0)
            count++;
        }
        if(count<k)
        printf("YES\n");
        else
        {
            printf("NO\n");    
        }
    }
}
