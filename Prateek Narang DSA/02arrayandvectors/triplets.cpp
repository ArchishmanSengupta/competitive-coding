
#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > triplets(vector<int>arr,int targetSum){
	//For Returning
	vector<vector<int> > result; // 
	// Now we sort the array o(NLogn)
	sort(arr.begin(),arr.end());

	//now we iterate over the vector and we should have atleast 
	// 2 numbers at last to do the pair sum problem
	int n=arr.size();
	for(int i=0;i<n-3;i++){
		int j=i+1; // { 1(i), 2(i+1), 3, 4(n-1)}
		int k=n-1;

		// Two Pointers Approach
		while(j<k){ //check overlapping 
			int curr_sum=arr[i];
			curr_sum+=arr[j]; // b
			curr_sum+=arr[k]; // c  -> a + b + c =targetSum

			if(curr_sum==targetSum){
				result.push_back({arr[i],arr[j],arr[k]});
				j++;
				k--;
			}
			if(curr_sum>targetSum){
				k--; // we reduce the greater number
			}
			if(curr_sum<targetSum){
				j++; // we increase the bigger number
			}

		}
		
	}
	return result;

}
int main(){
	vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
	int S=18;
	auto result=triplets(arr,S);

	for(auto v: result){
		for(auto number: v){
			cout<<number<<",";
		}
		cout<<endl;
	}
}

/* Output O(n^2)
1,2,15,
1,8,9,
2,7,9,
3,6,9,
3,7,8,
4,5,9,
4,6,8,
5,6,7,
*/