#include<stdio.h>
#include<math.h>
long int rev(long int x)
{
    //|i-rev(i)|%k==0 then Beautiful
    //Beautiful when the res is a whole number
    //2 x 1o^9 so we take long int
    long int i,sum=0,mul=10;
    while(x!=0)
    {
        i=x%10;           //main
        sum=(sum*mul)+i;  //part
        x=x/10;           //i.e calculation
    }
    return sum;
}

int main()
{
    long int i,j,k,res=0,x,r;
    scanf("%ld%ld%ld",&i,&j,&k);
    for ( x=i; x<=j; x++)
    {
        r=rev(x);
        if(abs(x-r)%k==0)
        res++;
    }
    printf("%ld",res);
    return 0;
}
