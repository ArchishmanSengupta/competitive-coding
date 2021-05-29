#include<bits/stdc++.h>
using namespace std;

int main(){
	

	// char s[1000]={'1','a','b','c','\0'};

	//string s="Jine mera dil luteya";
	//or 
	//string s1("OHO"); 
	//or
	//string s2;



	// getline(cin,s,'.');

	// for(char ch:s){
	// 	cout<<ch<<",";
	// }
	// cout<<s2<<endl; // Dynamic array

	//vector<string> ......

	string s;
	int n=5;
	vector<string> sarr;
	string temp;
	while(n--){
		getline(cin,temp);
		sarr.push_back(temp);
	}
	for(string x:sarr){
		cout<<x<<","<<endl;
	}
}