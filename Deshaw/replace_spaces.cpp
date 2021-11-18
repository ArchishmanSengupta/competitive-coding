#include<bits/stdc++.h>
using namespace std;

void replaceSpaces(string manipulateString)
{
	string toReplaceWith = "%20";

	for (int i = 0; i < manipulateString.length(); i++) {
		if (manipulateString[i] == ' ') {
			manipulateString.replace(i, 1, toReplaceWith);
		}
	}
	cout << manipulateString;
}

int main()
{
	string manipulateString = "Mr John Smith";
	replaceSpaces(manipulateString);

	return 0;
}
