//Subarray Sort
#include<bits/stdc++.h>
using namespace std;

//O(NlogN)
pair<int,int> bruteForce(vector<int> array){
//Write you code here.
	//brute (NLogN Time + o(LogN) Space)
			vector<int> copyOfArray(array);
			sort(array.begin(),array.end());

			//do comparison
			int i=0;
			int n=array.size();

			while(i<n and array[i]==copyOfArray[i]){
				i++;
			}
			int j=array.size()-1;
			while(j>=0 and array[j]==copyOfArray[j]){
				j--;
			}
			if(i==array.size()){
				return {-1,-1};
			}
			return {i,j};
	}


//O(N)
	//Helper Function
	bool outOfOrder(vector<int>array,int i){

		int x=array[i];
		if(i==0){
			return x > array [1];
		}
		if(i==array.size()-1){
			return x < array [i-1];
		}
		return x > array[i+1] or x < array [i-1];

	}
	pair<int,int> better(vector<int>array){

	int smallest=INT_MAX;
	int largest=INT_MIN;

	for(int i=0;i<array.size();i++){
		int x=array[i];

		if(outOfOrder(array,i)){
			smallest=min(smallest,x);
			largest=max(largest,x);
		}
	}
	//find the right index where smallest and largest lies(subarray)
	if(smallest==INT_MAX){
		return {-1,-1};
	}
	int left=0;
	while(smallest>=array[left]){
		left++;
	}
	int right=array.size()-1;
	while(largest<=array[right]){
		right--;
	}

	return {left,right};
}



int main(){
	vector<int>array{1,2,3,4,5,8,7,6,9,10,11};
	//auto res=bruteForce(array);
	auto res=better(array);
	cout<<res.first<<","<<res.second<<endl;
	return 0;
}