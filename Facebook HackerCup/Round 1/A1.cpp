#include<bits/stdc++.h>
using namespace std;
typedef long long int intt;
#define fo(i,n) for(intt i=1;i<n;i++)

void solve() {
	intt n, count = 0;
	char purani_wali;
	string w;
	cin >> n >> w;
	purani_wali = w[0];
	fo(i, n) {
		if (w[i] == 'F') continue;
		else if (w[i] == 'X') {
			if (purani_wali  == 'O') {
				count++;
			}
			purani_wali  = 'X';
		}
		else {
			if (purani_wali  == 'X') {
				count++;
			}
			purani_wali  = 'O';
		}
	}
	cout << count;

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
		cout << "\n";
	}

}
