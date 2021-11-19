#include<bits/stdc++.h>
using namespace std;
int add(int x, int y) {
	int keep = (x & y) << 1;
	int res = x ^ y;

	if (keep == 0) return res;
	add(keep, res);
}
int main(){

    cout<<add(15,15);
}