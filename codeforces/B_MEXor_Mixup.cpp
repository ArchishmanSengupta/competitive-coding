#include<iostream>
#include<string>
#include <functional>
#define ll long long
#define nline "\n"
using namespace std;

int func(int x) {
	if (x % 4 == 2)
		{return x + 1;}
	if (x % 4 == 1)
		{return 1;}
	if (x % 4 == 0)
		{return x;}
}


int main() {
   ll t;
   cin>>t;
   while(t--){
      
      ll n,k;
   cin>>n>>k;
	int cal = func(n - 1);
	if (cal == k) cout << n << nline;
	else {
		int check = cal ^ k;
		if (check == n) cout << n + 2 << nline;
		else cout << n + 1 << nline;
   }
   return 0;
}
}