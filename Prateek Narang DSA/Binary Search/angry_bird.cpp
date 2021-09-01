#include<bits/stdc++.h>
using namespace std;

bool canPlaceBirds(int B, int N, vector<int> nests, int sep) {

	// Start with initial bird location
	int birds = 1;

	// update the location where we can out the birds
	int location = nests[0];

	for (int i = 1; i <= N - 1; i++) {
		int current_location = nests[i];

		// 8-4 is >=3 so yes we also increase the count of birds
		if (current_location - location >= sep) {
			birds++;

			// we update the location
			location = current_location;

			// Check we have all birds placed or not
			if (birds == B) {
				return true;
			}
			return false;
		}
	}


}

int main() {
	int b = 3;
	vector<int> nests{1, 2, 4, 8, 9};
	// sorting
	sort(nests.begin(), nests.end());
	int n = nests.size();

	// Binary Search
	int s = 0;
	int e = nests[n - 1] - nests[0];
	int answer = -1;

	while (s <= e) {
		int mid = s + e / 2;
		bool canPlace = canPlaceBirds(b, n, nests, mid);
		if (canPlace) {
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}
	cout << answer << endl;

}