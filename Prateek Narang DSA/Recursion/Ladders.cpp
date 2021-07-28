#include<bits/stdc++.h>
using namespace std;

int countways(int n) {

	// BASE
	if (n < 0) {
		return 0;
	}
	if (n == 0) {
		return 1;
	}

	//RECURSIVE ---> GP O(3^N)
	return countways(n - 1) + countways(n - 2) + countways(n - 3);

}

int main() {
	int n; cin >> n;

	cout << countways(n) << endl;

	return 0;
}