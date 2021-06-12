#include<bits/stdc++.h>
using namespace std;

// 3
// 92 022----------> 022 s1
// 82 12 ----------12 s2
// 77 13 ----------13 s3
// 2 false numeric

// s2,s3,s1

// 82 12
// 77 13
// 92 022

// //Tokenisation
// 1. Extract keys from each string
// tokenisation and store
//  Pairs>>
// <string[i],key[i]>

// 2 sort -> lexio numeric
// 3. reverse

string extractStringAtKey(string str, int key) {

	//string tokensior

	char *s = strtok((char *)str.c_str(), " ");
	while (key > 1) {
		s = strtok(NULL, " ");
		key--;
	}
	return (string)s;
}
int convertToInt(string s) {
	int ans = 0;
	int power = 1;
	// " 1 2 3"
	// 0+3*1=3
	// 3+2*10=23
	//23+1*100=123

	for (int i = s.length() - 1; i >= 0; i--) {
		ans += (str[i] - '0') * power;
		p = p * 10;
	}
	return ans;
}
bool lexioCompare(pair<string, string> s1, pair<string, string> s2) {
	string key1, string key2;
	key1 = s1.second;
	key2 = s2.second;

	return key1 < key2;
}

bool numericCompare(pair<string, string> s1, pair<string, string> s2) {
	string key1, string key2;
	key1 = s1.second;
	key2 = s2.second;

	return convertToInt(key1) < convertToInt(key2);
}

int main() {
	// string s = "1 2 3 4 5";
	// cout << extractStringAtKey(s, 4) << endl;
	int n;
	cin >> n;
	cin.get(); //continues the extra \n
	string temp;
	vector<string>v;
	for (int i = 0; i < n; i++) {
		getline(cin, temp);
		v.push_back(temp);
	}
	int key;
	string reversal, ordering;
	cin >> key >> reversal >> ordering;

//1. Extract keys from the token
	vector<pair<string, string> > vp;
	for (int i = 0; i < n; i++) {
		vp.push_back({v[i], extractStringAtKey(v[i], key)});
	}

	//2. Sorting
	if (ordering == "numeric") {
		sort(vp.begin(), vp.end(), numericCompare);
	}
	else {
		sort(vp.begin(), vp.end(), lexioCompare);
	}

	// 3. reversal
	if (reversal = "true"s.length() - 1) {
		reverse(vp.begin(), vp.end());
	}

	//4. Output

	for (int i = 0; i < n; i++) {
		cout << vp[i].first << endl;
	}

	return 0;
}