#include<bits/stdc++.h>
using namespace std;

int main(){
	// Strtok()
	char input[1000];
	cin.getline(input,1000);

	// cout<<strtok(input," ")<<endl;
	// 	cout<<strtok(input," ")<<endl;
	// 		cout<<strtok(input," ")<<endl;

	// cout<<strtok(input," ")<<endl; //internally maintains state of the string you passed in the last function call

	// 	cout<<strtok(NULL," ")<<endl;
	// 		cout<<strtok(NULL," ")<<endl;

	char *token=strtok(input," ");

	while(token!=NULL){
		cout<<token<<endl;
		token=strtok(NULL," ");

	}

	return 0;
	}
	
