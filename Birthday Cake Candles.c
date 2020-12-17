#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i,n, max=0;
    scanf("%d",&n);
    int a[n];
    int count=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
        max=a[i];
    }
    for(i=1;i<=n;i++)
        if(a[i]==max)
        count++;
        printf("%d",count);
    return 0;   
}
