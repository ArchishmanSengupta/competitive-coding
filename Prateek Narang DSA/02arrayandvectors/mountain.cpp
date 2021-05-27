#include<bits/stdc++.h>
using namespace std;

int mountain(vector<int> arr){
	int n=arr.size();
	int largest=0;
	// do not put 0 as it will give -1
	//the last element cannot be a peak 
	for(int i=1;i<=n-2;){ // we should not update i++ here
		// check if a[i] is peak or not
	if(arr[i]>arr[i-1] and arr[i]>arr[i+1]){

		int count=1;
		int j=i;

		//traverse back and count++
		while(j>=1 and arr[j]>arr[j-1]){
			j--;
			count++;
		}
		// traverse foraward and count alongside
		while(i<=n-2 and arr[i]>arr[i+1]){
			i++;
			count++;
		}
		largest=max(largest,count);
	}

		else {
			i++;
		}
		
	}
	return largest;
}
	



int main(){
	vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
	cout<<mountain(arr);
	return 0;
}