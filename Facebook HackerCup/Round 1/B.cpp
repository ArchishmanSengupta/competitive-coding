#include<bits/stdc++.h>
using namespace std;
typedef long long int intt;
#define nline "\n"
#define fo1(i,n) for(intt i=1;i<n;i++)
#define fo(i,n) for(intt i=0;i<n;i++)
#define mm(a,b,c) memset(a , b , sizeof(c))
// extern const int MOD = int(1e9) + 7;
// using mod_int = _m_int<MOD>;
#define MOD 1000000007

void solve() {
	intt n;
	string s;
	cin >> n >> s;
	int ans = 0;
	char c = 'F';
	int ind = 0, i = 0;

	for (auto it : s) {
		if (it == 'O') {
			if (c == 'X') {
				ans += ((n - i) * (ind + 1)) % MOD;
				ans %= MOD;
			}
			c = 'O';
			ind = i;
		}
		else if (it == 'X') {
			if (c == 'O') {
				ans += ((n - i) * (ind + 1)) % MOD;
				ans %= MOD;
			}
			c = 'X';
			ind = i;
		}
		i++;
	}
	cout << ans << nline;
}

int main() {
#ifndef ONLINE_JUDGE
	// ifstream fin("input.txt");
	// ofstream fout("out.txt");
	//ofstream fout("error.txt");
	freopen("input.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

	intt test ;
	cin >> test;
	for (int i = 0; i < test; i++) {
		cout << "Case #" << i + 1 << ": ";
		solve();
		//cout << "\n";
	}

}
