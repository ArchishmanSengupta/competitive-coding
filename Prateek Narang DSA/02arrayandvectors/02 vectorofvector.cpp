#include<bits/stdc++.h>
int main(){
	//2D Vector
	vector<vector<int> > arr={
		{1,2,3},
		{4,5,6},
		{7,8,9,10},
		{11,12}};

	arr[0][0]+=10;
		//iterate and print
		for(int i=0;i<arr.size();i++){
			for(int number : arr[i]){ // for each loop
				cout<<number<<",";
			}
			cout<<endl;
		}
}