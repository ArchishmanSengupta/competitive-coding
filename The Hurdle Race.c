#include<stdio.h>
int main()
{
    int n,k,i,j,max=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int height[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&height[i]);
        if(max<height[i])
        max=height[i];
    }
    j=max-k;
    if(j<0)
    printf("0");
    else
    {
        printf("%d",j);    
    }
    return 0;  
}
