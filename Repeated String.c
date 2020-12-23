#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    long long int n,extra_var;
    int len,i,count=0;
    gets(a);
    scanf("%lld",&n);
    len=strlen(a);
    for ( i = 0;a[i]!='\0'; i++)
    {
        if(a[i]=='a')
        count++;
    }
    extra_var=n;
    //How many strings will be made
    extra_var=extra_var/len;
    extra_var=extra_var*count;
    n=n%len; // 10%3 =1 remains
    for ( i = 0; i < n; i++)
    {
        if(a[i]=='a')
        extra_var++;
    }
    printf("%lld",extra_var);
    return 0;


}
