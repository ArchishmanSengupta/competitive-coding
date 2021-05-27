#include<bits/stdc++.h>
using namespace std;

int main(){
	//demo vector
	//vector<int> arr= // {1,2,10,12,15};
	
	//Fill constructor
	vector<int> arr(10,7);

	//Fill Constructor
	vector<int> visited(1000,0);
	//Pop_Back
	arr.pop_back();

	//Push_Back O(1)
	arr.push_back(16);

	//Print all the element
	for(int i=0i<arr.size();i++){
		cout<<arr[i]<<endl;
	}

	//Size of the vector
	cout<<<arr.size()<<endl;

	//Capacity of the vector
	cout<<arr.Capacity()<<endl;
	//We have insert to insert element into vector
	//arr.insert()
	//Erase to remove particular element 
	//arr.erase()

}
