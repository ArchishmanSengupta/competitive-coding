#include<stdio.h>
int main(){
    int n,max,min,increase=0,decrease=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    min=a[0];
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            increase++;
        }
        if(min>a[i])
        {
            min=a[i];
            decrease++;
        }
    }
    printf("%d %d",increase,decrease);
    return 0;
}

