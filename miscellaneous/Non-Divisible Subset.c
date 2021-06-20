#include<stido.h>
int main()
{
    int n,k,i;
    scanf("%d%d",&n,&k);
    int b[k]; // for storing he remainders
    //For all the zero values there is loop
    for ( i = 0; i < k; i++)
    b[i]=0;
    for(i=0;i<n;i++)
    {
        int a; //storing the variables in the array
        scanf("%d",&a);
        b[a%k]++;
    }
    int max; //as the counting is asked to be maximum
    for ( i = 0; i <=k/2; i++)
    {
        if(i==0)
        { // for one element
            if(b[i]>0)
            max++;
        }
        else if (i==k-i) 
        {
            if(b[i]>0)
            max++;
        }
        else
        {
            if(b[i]>b[k-i])
            max=max+b[i];
            else{
                max=max+b[k-i];
            }
        }
    }
    printf("%d",max);
    return 0;
}
