#include<stdio.h>
int main()
{
    int n,i,j,c=0,max=0;
    scanf("%d",&n);
    int a[n],b[n];
    for ( i = 0; i <n; i++)
    scanf("%d",&a[i]);
    //For sub arrays
    //Bubble sort
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j<n;j++)
        {
            if(a[i]==a[j] || (a[i]+1)==a[j])
            c++;
        }
        b[i]=c;
        c=0;
    }
    max=b[0];
    for(i=0;i<n;i++)
    if(max<b[i])
    max=b[i];
    printf("%d",max);
    return 0;
}
