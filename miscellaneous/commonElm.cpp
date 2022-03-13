#include<bits/stdc++.h>
using namespace std;

int countOfCommonElements(
    vector<int> firstArray, 
    vector<int> secondArray, 
    int firstSize, 
    int secondSize){

int firstPointer = 0;
int secondPointer = 0;
int count=0;

while(firstPointer < firstSize and secondPointer < secondSize){
    if(firstArray[firstPointer] < secondArray[secondPointer]){
        firstPointer++;
    }
    else if(firstArray[firstPointer] >  secondArray[secondPointer]){
        secondPointer++;
    }else{
        //cout<<secondArray[secondPointer]<< " ";
        firstPointer++;
        secondPointer++;
        count++;
    }
    
}
return count;
    }
int main(){
    
    int firstSize = 0;
    int secondSize = 0;

    cin>>firstSize>>secondSize;
    
    vector<int> firstArray(firstSize);
    vector<int> secondArray(secondSize);

    for(auto &element: firstArray){
        cin>>element;
        // cout<<element<<" ";
    }
    for(auto &element: secondArray){
        cin>>element;
        // cout<<element<<" ";
    }
    

    cout<<countOfCommonElements(firstArray, secondArray, firstSize, secondSize);

    return 0;

}
