#include<bits/stdc++.h>
using namespace std;


int countSubsets(vector<int> arr, int n, int i, int x) {

	//Base

	if (i == n) {
		if (x == 0) {
			return 1;
		}
		return 0;
	}

	//Recursive

	int include = countSubsets(arr, n, i + 1, x - arr[i]);
	int exclude = countSubsets(arr, n, i + 1, x);
	return include + exclude;


}
int main() {

	std::vector<int> arr = {1, 2, 3, 4, 5};

	int x = 6;
	cout << countSubsets(arr, arr.size(), 0, x) << endl;
	return 0;
}