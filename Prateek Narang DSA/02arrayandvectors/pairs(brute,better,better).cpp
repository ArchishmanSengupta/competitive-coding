#include<bits/stdc++.h>
using namespace std;


//O(N^2)
vector<int> findSumBrute(vector<int> &arr, int sum){
	vector<int> res;
	for(int i=0;i<arr.size();i++){
		for(int j=i+1;i<arr.size();j++){
			if(arr[i]+arr[j]==sum){
				res.push_back(arr[i]);
				res.push_back(arr[i]);
				return res;
			}
		}
	}
	return res;
}
//O(N) Unordered Set
vector<int> findSum(vector<int> &arr,int sum){
	vector<int> res;
	unordered_set<int>s;
	for(int i=0;i<arr.size();i++)
	{
		int x=sum-arr[i];
		if(s.find(x)!=s.end()){
			res.push_back(x);
			res.push_back(arr[i]);
			return res;
		}
		s.insert(arr[i]);
	}
	return res;
}
//O(NLogN) BST
vector<int> findSumBetter(vector<int> &arr,int sum){
	vector<int> res;
	sort(arr.begin(),arr.end());
	int left=0;
	int right=arr.size()-1;
	while(left<right){
		if(arr[left]+arr[right]<sum){
			left++;
		}
		else if(arr[left]+arr[right]>sum){
			right++;
		}
		else{
			res.push_back(arr[left]);
			res.push_back(arr[right]);
			return res;
		}
	}
	return res;
}


int main(){
// 	Timer tmr;
//     double t = tmr.elapsed();
//     std::cout << t << std::endl;

//     tmr.reset();
//     t = tmr.elapsed();
//     std::cout << t << std::endl;

    vector<int> arr{10,5,2,3,-6,9,11};
    int sum=4;
    // auto p=findSum(arr,sum);
    // auto p=findSumBrute(arr,sum);
    auto p=findSumBetter(arr,sum);
    if(p.size()==0){
    	cout<<"No such array";
    }
    else {
    	cout<<p[0]<<","<<p[1]<<endl;
    }

	return 0;
}