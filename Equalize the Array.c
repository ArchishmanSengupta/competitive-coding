#include<stdio.h>
int main()
{
    int n,i,j,k=0,x=0,y=0;
    scanf("%d",&n);
    int array[n];
    for ( i = 0; i < n; i++)
    scanf("%d",&array[i]);
    for ( i = 0; i < n; i++)
    {
        x=array[i];
        for ( j = 0;j<n; j++)
        {
            if(array[i]==array[j])
            k++;
        }
        if(y<k)
        {
            y=k;
        }
        k=0;
    }
    printf("%d",n-y);
}
