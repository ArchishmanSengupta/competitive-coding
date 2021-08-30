#include<bits/stdc++.h>
using namespace std;
int frequency_count(vector<int> arr, int key) {
	int s = 0;
	int e = arr.size() - 1;
	int ans = -1;
	while (s <= e) {
		int mid = s + e / 2;

		//  IMP STEP
		if (arr[mid] == key) {
			ans = mid;
			// we try to search in the left
			e = mid - 1;
		}
		// rest is same
		else if (arr[mid] > key) {
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}

	}
	return ans;
}

int main() {
	vector<int> arr = {1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 4};
	int n = arr.size();
	cout << frequency_count(arr, 1) << endl;

	return 0;
}