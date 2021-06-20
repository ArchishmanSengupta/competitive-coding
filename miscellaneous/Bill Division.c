#include<stdio.h>
int main()
{
    long int n,k,i,act,cha=0,b;
    scanf("%ld%ld", &n,&k);
    int a[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%ld",&a[i]);
        cha=cha+a[i];
    }
    scanf("%ld",&b);
    act=cha-a[k];
    act=act/2;
    if(b==act)
    printf("Bon Appetit");
    else
    {
        printf("%ld",b-act);
    }
    return 0;
}

//This code is contributed by Batman! just kidding its Archishman
