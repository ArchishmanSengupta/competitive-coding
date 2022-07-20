
/*--------------------AUTHOR: you_know_who, Competitive Programming template for "C"----------------*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#define MOD 1000000007
#define var -1000000000000
#define MOD1 998244353
//#define INF 2e18
#define sun(i,n) for(ll i=0;i<n;i++)
#define fo1(i,a,n) for(ll i=a;i<=n;i++)
#define fo3(val,x) for(auto val : x)
#define nline "\n"
#define PI 3.141592653589793238462
#ifndef ONLINE_JUDGE  // Set
#define debarr(a,n) cerr<<#a<<":";for(int i=0;i<n;i++)cerr<<a[i]<<" ";cerr<<endl;
#define debmat(mat,row,col) cerr<<#mat<<":\n";for(int i=0;i<row;i++){for(int j=0;j<col;j++)cerr<<mat[i][j]<<" ";cerr<<endl;}

#define debug(x) cerr << #x <<" ";_print(x);cerr <<endl;
#else
#define debug(x)
#endif
typedef double dou;
typedef long long ll;
typedef long long int intt;
typedef unsigned long long ull;
typedef long double lldou;
ll globalVariable = 1e18;

// #define INF 9999999

//----------------------------------------Code Here------------------------------------------
void printMaxActivities(int s[], int f[], int n)
{
	int i, j;

	printf ("Following activities are selected n ");

	i = 0;
	printf("%d ", i);

	for (j = 1; j < n; j++)
	{
		if (s[j] >= f[i])
		{
			printf ("%d ", j);
			i = j;
		}
	}
}
void solve() {
	int s[] =  {1, 3, 0, 5, 8, 5};
	int f[] =  {2, 4, 6, 7, 9, 9};
	int n = sizeof(s) / sizeof(s[0]);
	printMaxActivities(s, f, n);
}

//----------------------------------------Driver Function-----------------------------------
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("outpu1.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	ll test = 1;
	for (int i = 0; i < test; i++) {
		solve();
	}
	return 0;
}