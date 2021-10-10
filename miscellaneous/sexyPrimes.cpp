void seive(int l, int r) {
	bool prime[r + 1];
	memset(prime, true, sizeof(prime));
	for (int p = 2; p * p <= r; p++) {
		// update multiples of P
		for (int i = 2 * p; i <= r; i += p) {
			prime[i] = false;
		}
	}
	// from L TO R-6 checking if i, i++6 are prime or not
	for (int i = l; i <= r - 6; i++) {
		if (prime[i] and prime[i + 6]) {
			cout << i << " " << i + 6 << nline;
		}

	}
	cout << nline;
}
void solve() {
	int l = 2;
	int r = 40;
	seive(l, r);
}
