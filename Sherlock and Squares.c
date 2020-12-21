#include<stdio.h>
#include<math.h>
int main()
{
    int test_cases,i,j,count=0;
    long long  a,b;
    scanf("%d",&test_cases);
    for ( i = 0; i < test_cases; i++)
    {
        scanf("%lld%lld",&a,&b);
        for ( j = sqrt(a); j <=sqrt(b); j++)
        {
            if((j*j)>=a &&(j*j)<=b)
            count++; 
        }
        printf("%d\n",count);
        count=0;
    }
    return 0;  
}
