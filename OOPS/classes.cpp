

#include<bits/stdc++.h>
using namespace std;

// ATTRIBUTE, FUNCTIONALITY

class Phone {
	string PhoneName;
	string PhoneSize;

public:
	// Constructor
	Phone(string name, string size) {
		// construct object
		PhoneName = name;
		PhoneSize = size;
	}

	//OPERATIONS/FUNCTION
	void makeCall() {
		cout << "Make a call using: " << PhoneName;
	}
	void recieveCall() {
		cout << "Recieving call from: " << PhoneName;
	}

};
int main() {

	Phone iPhone("Iphone", "1000x500");
	iPhone.makeCall();
	Phone GPixel("Google Pixel", "1000x500");
	cout << "\n";
	GPixel.makeCall();
	cout << "\n";
	GPixel.recieveCall();
	Phone Motorola("Motorola", "900x1280");
	Motorola.makeCall();
	cout << "\n";
	Motorola.recieveCall();


	return 0;
}