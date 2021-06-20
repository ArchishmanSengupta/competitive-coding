#include<stdio.h>
#include<string.h>
int main()
{
    int h[25],i,max=0, area,a,b;//a,b for string length
    for (int i = 0; i < 26; i++)
    scanf("%d",&h[i]);
    char ch[11];
    scanf("%s",&ch);
    a=strlen(ch);
    for ( i = 0; i < a; i++)
    {
        b=ch[i]-97;
        if(h[b]>max)
        max=h[b];
    }
    area=max*a;
    printf("%d",area);
    return 0;
}
