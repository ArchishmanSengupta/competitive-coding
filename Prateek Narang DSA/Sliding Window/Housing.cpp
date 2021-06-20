#include<bits/stdc++.h>
using namespace std;
/*

	plots=[1 3 2 1 4 1 3 2 1 1 2]
	11 ele
	k=8

	sample output
	 2 5
	 4 6
	 5 9

	*/
//brute force approah
//o(n3)
// Prefix Sum o(n2) time
//1 3 2 5
//Binary Searcho(nlogn) time
//Sliding window o(n)time +o(1) space

void housing(int *arr, int n, int k) {
	int i = 0;
	int j = 0;
	int cs = 0;

	while (j < n) {
		// expand to right
		cs += arr[j];
		j++;

		//remove elements from the till cs>sum and i<j
		while (cs > k and i < j) {
			cs = cs - arr[i];
			i++;
		}
		//check if any given point
		if (cs == k) {
			cout << i << " - " << j - 1 << endl;
		}
	}
	return;
}

int main() {

	//smallest window that contains the required sum
	// handle case whre the plots are negative
	int plots[] = {1, 3, 2, 1, 4, 1, 3, 2, 1, 1};
	int n = sizeof(plots) / sizeof(int);
	int k = 8;

	housing(plots, n, k);

}