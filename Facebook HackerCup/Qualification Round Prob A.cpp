#include<bits/stdc++.h>
using namespace std;
typedef long long intt;
#define fo(i,n) for(intt i=0;i<n;i++)

bool is_vowel(char c) {
	if (c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U')  {
		return true ;
	}
	return false ;
}
int check(string str, string s) {
	int ans = 0;
	//cin>>str;
	intt length = str.size();
	fo(i, length)
	{
		if (is_vowel(s[i]))
		{
			if (str[i] != s[i])
			{
				if (is_vowel(str[i]))
				{
					ans += 2;
				}
				else {
					ans++;
				}
			}
		}
		else {
			if (str[i] != s[i])
			{
				if (is_vowel(str[i]))
				{
					ans += 1;
				}
				else {
					ans += 2;
				}
			}
		}
	}
	return ans;

}
void solve() {

	string str;
	cin >> str;
	intt length = str.size();
	string s;
	fo(i, length)
	{
		s.append("A");
	}
	int final_ans = INT_MAX;
	//cout<<check(str, s)<<" ";
	final_ans = min(final_ans, check(str, s));
	for (int i = 1; i <= 25; i++)
	{
		for (int j = 0; j < length; j++)
		{
			s[j]++;
			//cout<<s[j]<<" ";
			//cout<<check(str, s)<<" ";
		}
		final_ans = min(final_ans, check(str, s));
	}
	cout << final_ans;

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
