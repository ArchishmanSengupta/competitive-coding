//Just some calculations needed
//We get three cases where Case 1: delete and append both matches and there are no more moves needed. it became zero.
//Case 2:  If the remaining extra moves are even then we print YES else NO
//case 3: if both of the avove doesnt happen
//Lets Code

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100]; // Input of both the strings
    int k,i,len_s1,len_s2,similar_things=0,longer_len; // K is the no. of moves, i for looping
    //scaning
    scanf("%s",s1);
    scanf("%s",s2);
    scanf("%d",&k);
    len_s1=strlen(s1); //Storing the length
    len_s2=strlen(s2);
    
    //Checking the longest length and storing it in longer_len
    
    if(len_s1>len_s2)
    longer_len=len_s1;
    else
    longer_len=len_s2;

    for ( i = 0; i < longer_len; i++)
    {
        //Case 1
        if(s1[i]==s2[i])
        similar_things++;
        else
        {
            break; //if not similar
        }
    }
    
    //Case 2 if the moves are less= than given k
    if(len_s1+len_s2<=k)
    printf("Yes");
    //case 3 if even
    else if (k-(len_s1+len_s2-2*similar_things)>=0) //How many deletion required
    {
        if ((k-(len_s1+len_s2-2*similar_things))%2==0)
        printf("Yes");
        else
        printf("No");
    }
    else
    {
        printf("No");
    }
    return 0;   
}
