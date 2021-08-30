/*
Write a function that takes input ans sorted array of distinct integers which
is rotated about a pivot point and finds the index of any given element

sample input {7 9 10 1 2 3 4 5 6}

*/
#include<bits/stdc++.h>
using namespace std;

int rotated(vector<int> arr, int key) {
	int s = 0;
	int e = arr.size() - 1;

	while (s <= e) {
		int mid = s + e / 2;

		if (arr[mid] == key) {
			return mid;
		}

		// LEFT Side
		if (arr[mid] >= arr[s]) {
			if (key >= arr[s] and key <= arr[mid]) {
				e = mid - 1;
			} else s = mid + 1;

		}
		// Right Side
		else {
			if (key >= arr[mid] and key <= arr[e]) {
				s = mid + 1;
			}
			else e = mid - 1;
		}
	}
	return -1;
}

int main() {
	vector<int> arr = {10, 9, 8, 7, 6, 1, 2, 3, 4, 5};
	int n = arr.size();
	int key = 2;
	cout << rotated(arr, key) << endl;
	return 0;
}