#include<bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#define inf 1000000000000000005
#endif

void solve() {

	tuple<int, int, int, int> tupi(3, 4, 5, 6);
	cout << tuple_size<decltype(tupi)>::value;
	cout << endl;

	long n = 4, m = 5, i, j;
	long a[10][10];
	memset(a, 0, sizeof(a));

	/*
	And here is the reason: " \n" is a char*, " \n"[0] is ' ' and " \n"[1] is '\n'.
	*/
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			cout << a[i][j] << " \n"[j == m];

	cout << endl;
	vector<int> v(10);
	for (int i = 0; i <= 10; i++) {

		/*
		emplace_back is faster than push_back
		'cause it just construct value at the end of vector
		but push_back construct it somewhere else and then move it to the vector.
		*/
		v.emplace_back(i);
	}
	for (auto i : v) {
		cout << i << " ";
	}

	cout << endl;

	// ------------------LAMBDA FUNCTION


	auto f = [] (int a, int b)-> int{return a + b;};
	cout << f(1, 2) << endl;


	vector<int> nums = {23, 2, 5, 2, 3, 344, 22};

	sort(nums.begin(), nums.end(), [
	     ]
	(int a, int b) {
		return a > b;
	});
	for (auto i : nums) {
		cout << i << " ";
	}
	cout << endl;
	// ------------------LAMBDA FUNCTION


	//-------MOVE
	vector<int> aa = {1, 2, 3};
	vector<int> b = move(aa);

	for (auto i : b) {
		cout << i << " ";
	}
	cout << endl;
	//-------MOVE

	//---------------C++0x String
	//utf-8 string

	string str = R"(Dear Programmers,I'm using C++14
           Regards, Archie!)";
	cout << str << endl;

	//---------------C++0x String


	//----------REGULAR EXPRESSION----------
	regex email_pattern(R"(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$)");

	string valid_email("archie@gmail.com"), invalid_email("hmm");

	if (regex_match(valid_email, email_pattern)) {
		cout << valid_email << " is valid \n";
	}
	else {
		cout << valid_email << "is invalid\n";
	}
	cout << endl;
}

int main() {

	long long t = 1;
	while (t--) {
		solve();
	}
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("outpu1.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
}