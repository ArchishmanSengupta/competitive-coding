#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int n, int key)
{
	int s = 0;
	int e = n - 1;


	while (s <= e) {
		int mid = s + e / 2;
		if (arr[mid] == key) {
			return mid;
		}
		if (arr[mid] > key) {
			e = mid - 1;
		}
		else s = mid + 1;
	}
	return -1;
}

int main() {
	int arr[7] = {1, 2, 10, 1, 19, 29, 28};
	int key = 19;
	int n = 7;
	binary_search(arr, n, key);
	return 0;

}