#include<stdio.h>
int main()
{
    int n,p,count=0,front,back;
    scanf("%d",&n,&p);
    front=p/2;
    back=n/2-p/2;
    if(front<back)
    printf("%d",front);
    else
    printf("%d",back);
    return 0;
}
