#include<stdio.h>
int main()
{
    int i,n,m,level=0,score;
    scanf("%d",&n);
    int rank[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &rank[level+1]);
        if(rank[level +1]!=rank[level])
        level++;
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&score);
        while(level && score>=rank[level])
        level--;
        printf("%d\n",level+1);
    }
    return 0;
}
