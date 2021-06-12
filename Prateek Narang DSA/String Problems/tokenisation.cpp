#include<bits/stdc++.h>
using namespace std;

int main() {
	string input;
	getline(cin, input);

	// Create a string stream obj
	stringstream ss(input);
	// Sheldon Cooper or Bazinga

	// >> and << operators -- buffer
	string token;
	vector<strings > tokens;
	while (getline(ss, token, ' ')) {
		tokens.push_back(token);
	}

	for (auto token : tokens) {
		cout << token << ",";
	}
	return 0;
}