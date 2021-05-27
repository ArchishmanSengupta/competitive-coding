#include<bits/stdc++.h>
using namespace std;




int largestChain(vector<int> arr){
	unordered_set<int> s;
	int n=arr.size();
	int largestlength=1;
	// Data inside  a set
	for(int x: arr){
		s.insert(x);
	}

	// Iterate over the array
	for(auto element: s){
		int parent = element - 1;


		if(s.find(parent)==s.end()){
			// Find the entire band
			int next_no =element + 1;
			int count=1;

			while(s.find(next_no)!=s.end()){
				next_no++;
				count++;
			}
			// check if the count> largestlength or not if yes update
			if(count> largestlength){
				largestlength=count;
			}
		}
	}
	return largestlength;
}

int main(){
	
	vector<int> arr{1, 9, 3, 0, 18, 5, 2, 4, 10, 7, 12, 6};
	cout<<largestChain(arr);

	return 0;
}