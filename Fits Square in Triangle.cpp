#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
    cin>>test;
    while(test--)
    {
        int b;
        cin>>b;
        b=b/2;
        cout<<(b*(b-1))/2;
        cout<<endl;
    }
	return 0;
}
