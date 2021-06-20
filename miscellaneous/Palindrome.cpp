//Palindrome

//ans=(ans*10)+r;

int PalinArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int res=0;
        int temp=a[i];

        while(temp>0)
        {
            int r= temp%10;
            temp/=10;
            res=(res*10)+r;
        }
        if(res!=a[i])
        return 0;
    }
    return 1;
}
