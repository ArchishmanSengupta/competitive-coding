
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
void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int array[], int low, int high) {

	int pivot = array[high];

	int i = (low - 1);

	for (int j = low; j < high; j++) {
		if (array[j] <= pivot) {

			i++;

			swap(&array[i], &array[j]);
		}
	}

	swap(&array[i + 1], &array[high]);

	return (i + 1);
}

void quickSort(int array[], int low, int high) {
	if (low < high) {
		int pi = partition(array, low, high);

		quickSort(array, low, pi - 1);

		quickSort(array, pi + 1, high);
	}
}

// function to print array elements
void printArray(int array[], int size) {
	for (int i = 0; i < size; ++i) {
		printf("%d  ", array[i]);
	}
	printf("\n");
}
void solve() {
	int data[] = {8, 7, 2, 1, 0, 9, 6};

	int n = sizeof(data) / sizeof(data[0]);

	printf("Unsorted Array\n");
	printArray(data, n);
	quickSort(data, 0, n - 1);

	printf("Sorted array in ascending order: \n");
	printArray(data, n);
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