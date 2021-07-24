/*
	Question: Find Minimum and Maximum of an array

	Question Link: https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

	450 DSA Cracker(450dsa.com)
	by Love Babbar.

	Solution Author: Archishman Sengupta
*/


#include<bits/stdc++.h>
#define ll long long
using namespace std;

// 1. Brute force approach | Best Case: 2*(n-1) comparisons | Worst Case: 3*(n-1) comparisons


void bruteForceSolution(int array[], int n, int &minimumElement, int &maximumElement) {

	// Intialize the first element as Maximum and Minimum and check for next elements

	minimumElement = array[0];
	maximumElement = array[0];

	for (int i = 0; i < n; i++) {

		// a. Finding Maximum Element

		if (array[i] > maximumElement) {
			maximumElement = array[i];
		}
		// b. Finding Minimum Element

		else if (array[i] < minimumElement) {
			minimumElement = array[i];
		}
	}

}

// 2. Optimal approach

void optimalSolution(int array[], int n, int &minimumElement, int &maximumElement) {

	maximumElement = INT_MIN; // - INFINITY
	minimumElement = INT_MAX; // INFINITY

	// 1. Check for ODD Parity of the array. If yes avoid the last element and consider it later

	bool isOdd = n & 1;
	if (isOdd) {
		n--;
	}

	// 2. Comparing elements in Pairs array[i] and array[i+1]

	for (int i = 0; i < n; i++) {

		// a. Find Maximum and Minimum between array[i] and array[i+1]

		int maximumBetween, minimumBetween;

		if (array[i] > array[i + 1]) {
			minimumBetween = array[i + 1], maximumBetween = array[i];
		}
		else {
			minimumBetween = array[i], maximumBetween = array[i];
		}

		// b. Updating maximumElement
		if (maximumBetween > maximumElement) {
			maximumElement = maximumBetween;
		}
		// c. Updating minimumElement
		if (minimumBetween < minimumElement) {
			minimumElement = minimumBetween;
		}
	}

	// 3. if last element is ODD

	if (isOdd) {
		if (array[n] > maximumElement) {
			maximumElement = array[n];
		}

		if (array[n] < minimumElement) {
			minimumElement = array[n];
		}
	}
}

// DRIVER FUNCTION
int main() {
	int array[] = { 3, 6, 7, 8, 2, 5, 4};
	int n = sizeof(array) / sizeof(array[0]);

	int minimumElement, maximumElement;

	// bruteForceSolution(array, n, minimumElement, maximumElement);
	optimalSolution(array, n, minimumElement, maximumElement);

	cout << "The minimum array element is " << minimumElement << endl;
	cout << "The maximum array element is " << maximumElement;

	return 0;
}


