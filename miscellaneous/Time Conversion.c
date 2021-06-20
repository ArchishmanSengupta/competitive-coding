#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[10];
    gets(s);
    if(s[8]=='A')
    {
        if(s[0]=='1' &&s[1]=='2')
        {
            s[0]='0';
            s[1]='0';
        }
    }
    else{
        if(s[0]=='0' || s[1]!='2')
        {
            s[0]+=1;
            s[1]+=2;
        }
    }
    s[8]='\0';
    puts(s);
    return 0;    
}
