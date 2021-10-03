#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n, res = -1;
	long long maxi = 0;
	cin >> n;
	vector<int>v(n);
	for (auto &val : v) {
		cin >> val;
	}
	unordered_map<int, int> mapping;
	for (auto val : v) {
		mapping[v[val]]++;
	}
	for (auto i : mapping) {
		if (maxi < i.second) {
			res = i.first;
			maxi = i.second;
		}
		debug(res)
		debug(maxi)
	}
	if (res >= floor(n / 2))
	{	cout << res;
	}
    }
int main(){
    solve();
}