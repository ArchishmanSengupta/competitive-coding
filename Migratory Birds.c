#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int birdIds[n];
    int freq[6] = {0};
    for(int i = 0 ; i < n ; i++)
    {
        scanf(" %d" , &birdIds[i]);        
        freq[ birdIds[i] ]++;
    }    

    int maxType = 1;
    int maxFreq = freq[1];

    for(int i = 2 ; i < 6 ; i++)
    {
        if( freq[i] > maxFreq)
        {
            maxType = i;
            maxFreq = freq[i];
        }
    }
    printf("%d\n",maxType);
}

