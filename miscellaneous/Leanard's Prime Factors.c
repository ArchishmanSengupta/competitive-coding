#include <stdio.h>
#include <stdlib.h>
 
int pr[16] ={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53}; 


/*     Function that returns the maximum number 
    of unique prime factors for any number 
        in the inclusive range [1,n] */

int factors (unsigned long long int n) {
    unsigned long long int x = 1; 
    int i = 0;
    while ( x <= n  && i < 16 ) {
        x = x * pr[i];
        /*     Some debug tests 
            (can help you understand this function)
        int j;
        printf("%d: %d", i, pr[0]);
        for (j = 1; j <= i; ++j) {
            printf(" * %d", pr[j]);
        }
        printf(" = %lld <? %lld\n", x, n); */
        ++i;
    } 
    return i - 1;
}

int main() {
    
    int t, i;
    /*     Really important to use at 
        least a usigned long long int variable, 
        if not there will be overflow */
    unsigned long long int n;    
    scanf("%d", &t);
    for (i = 1; i <=t; ++i) {
        scanf("%lld", &n); 
        printf("%d\n", factors(n));
    }
    return 0;
}
