#include <iostream>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int a,b,c;
		cin >> a >> b >> c;
		if(a==0 || b==0 || c==0 || a+b+c!=180)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}
