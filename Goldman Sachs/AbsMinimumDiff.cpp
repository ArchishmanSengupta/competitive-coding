/*
    Q1. FIND THE MINIMUM abs DIFFERENCE BETWEEN THE ELEMENTS OF TWO ARRAYS

    Approach nlogn + nlogn :- sorting and two-pointers approach
    1. Sort the array
    2. Use two pointers for each array and compare the two elements
    3. Store the minimum difference in a result variable which is initially set to INT_MAX
*/
#include<bits/stdc++.h>
using namespace std;

/*
    @param - first Array
    @param - second Array
    @param - length of the array, asssuming same for both
*/
int 
    findMinimumDifference(
    vector<int> firstArray, 
    vector<int> secondArray, 
    int n){

    int firstPointer = 0, secondPointer = 0;
    int minimumValue = INT_MAX;

    sort(firstArray.begin(), firstArray.end());
    sort(secondArray.begin(), secondArray.end());

    // Till the end of the array
    while(firstPointer<n and secondPointer<n){
        int difference = abs(firstArray[firstPointer] - secondArray[secondPointer]);
        if( difference < minimumValue){
            minimumValue = difference;
        }
        // increase pointers for smaller values
        if( firstArray[firstPointer] < secondArray[secondPointer]){
            firstPointer++;
        }
        else{
            secondPointer++;
        }
    }
    return minimumValue;
}
int main(){
    //Taking the input
    int numOfElements;
    cin>>numOfElements;

    vector<int> firstArray(numOfElements);
    vector<int> secondArray(numOfElements);
    
    for(auto &elements : firstArray){
        cin>>elements;
    }
    for(auto &elements : secondArray){
        cin>>elements;
    }

    cout << findMinimumDifference(firstArray, secondArray, numOfElements);
    return 0;
}
