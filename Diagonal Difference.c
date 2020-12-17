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

int main()
{
    int n,mat[100][100],fdia=0,sdia=0;
    scanf("%d",&n);
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        scanf("%d",&mat[i][j]);
        }
    } 
    for(int i=0;i<n;i++)
    {
        fdia+=mat[i][i];
    }
    for(int i=0;i<n;i++)
    sdia+=mat[i][n-i-1];
    printf("%d",abs(fdia-sdia));              
}
