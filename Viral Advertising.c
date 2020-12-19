#include<stdio.h>
int main()
{
    int i, d,tl,recipient=5,like=0; 
    //tl =Total Likes at last
    scanf("%d",&d);
    for ( i = 0; i < d; i++)
    {
        if(i!=0)
        {
            recipient=(recipient/2)*3;
        }
        tl=recipient/2;
        like=like+tl;
    }
    printf("%d",like);
    return 0;
}
