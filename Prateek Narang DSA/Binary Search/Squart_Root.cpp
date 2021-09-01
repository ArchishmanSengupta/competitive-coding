#include<bits/stdc++.h>
using namespace std;

float squareRoot(int N, int P) {
	int s = 0;
	int e = N;
	float answer = 0;

	// Binary Search(0....N)
	while (s <= e) {
		int mid = s + e / 2;
		if (mid * mid == N) {
			return mid;
		}
		else if (mid * mid < N) {
			answer = mid;
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}

	// Linear Search(for floating point)

	float increment = 0.1;

	for (int place = 1; place < P; place++) {
		// do linear search

		while (answer * answer <= N) {
			answer += increment;
		}
		// Backtrack and Take one step back
		answer = answer - increment;
		increment = increment / 10.0;
	}


	return answer;


}
int main() {
	/*
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);

		freopen("out.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	*/
	int n, p;
	cin >> n >> p;
	cout << squareRoot(n, p) << endl;
	return 0;


}

