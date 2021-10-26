#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()

// 1.    1 <= T <= 100
// 2.    1 <= N <= 100000 (n is even)
// 3.    1 <= A[i] <= 1,000,000,000
// 4.    Each A[i] is distinct

int gen_rand(int maxx, int minn) {
	return (rand() % (maxx - minn + 1) + minn);
}
void solve() {
	int n = gen_rand(100000, 1);
	while (n % 2) n  = gen_rand(100000, 1);
	vector<int> a(n, 0);
	set<int> s;
	s.insert(0);
	for (auto& i : a) {
		while (binary_search(all(s), i)) i = gen_rand(1000000000, 1);
		s.insert(i);
	}
	cout << n << "\n";
	for (auto& i : a) cout << i << " ";
	cout << "\n";
}

int main() {
	freopen("input.txt", "w", stdout);
	int testt = gen_rand(10, 1);

	srand(time(0));
	cout << testt << "\n";
	for (int i = 1; i <= testt; ++i) {
		solve();
	}
}