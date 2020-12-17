#include<stdio.h>
int main()
{
    int b,n,m,usb[1000],key[1000],i,j,result=0,no=-1;
    scanf("%d%d%d",&b,&n,&m);
    for ( i = 0; i <n; i++)
    scanf("%d",&key[i])
    for ( i = 0; i < m; i++)
    scanf("%d",&usb[i]);
    for(i=0;i<n;i++)
    { //Matching sum of the keyboards and usb
        for ( j = 0; j<m;j++)
        {
            result=key[i]+usb[j];
            if(result>no && result<=b)
            no=result;

            
        }
    }
    printf("%d",no);
    
    
}
