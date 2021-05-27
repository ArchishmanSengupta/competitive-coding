#include<bits/stdc++.h>
using namespace std;

vector<int> PairSum(vector<int> arr, int Sum){
	//Main Logic
	unordered_set<int> s;
	vector<int> result;

	for(int i=0;i<arr.size();i++){
		int x=Sum-arr[i];
		// if we find the element inside the set, then
		// we find the pair

		if(s.find(x)!=s.end()){
			result.push_back(x);
			result.push_back(arr[i]);
			return result;
		}
		//insert the curr number in the set
		// we should insert after not before
		s.insert(arr[i]);
	}
	return {};
}

int main(){
	//Initial array
	vector<int> arr{10, 5, 2, 3,-6, 9, 11};
	//Target sum
	int S=4;
	auto p=PairSum(arr,S);
	if(p.size()==0){
		cout<<"No such pair";
	}
	else{
		cout<<p[0]<<","<<p[1]<<endl;
	}
	return 0;

}