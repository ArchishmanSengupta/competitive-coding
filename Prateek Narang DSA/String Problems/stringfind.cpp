#include<bits/stdc++.h>
using namespace std;

int main(){
	string paragraph="the Big Bang Theory is an American television sitcom created by Chuck Lorre and Bill Prady, both of whom served as executive producers on the series, along with Steven Molaro.";
	
	string word;
	getline(cin,word);
	// Find function
	int index= paragraph.find(word);
	
	if(index!=-1){
		cout<<"first occurrence  "<<index;
	}

	index=paragraph.find(word,index+1);

	if(index!=-1){
		cout<<"second occ  "<<index<<endl;
	}
	return 0;
}