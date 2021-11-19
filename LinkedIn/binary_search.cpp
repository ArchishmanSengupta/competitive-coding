#include<bits/stdc++.h>
using namespace std;
binarySearch(vector<int> a,int key){
    long startingIndex=0;
    long lastIndex=n-1;

    // CANT LET IT OVERFLOW
    long middleElement= lastIndex+(startingIndex - lastIndex)/2;

    // Atleast Two elements
    while(startingIndex>=lastIndex){
        if(a[middleElement]==key){
            return 1;
        }
        else if(a[middleElement]>key){
            lastIndex=middleElement-1;
        }
        else startingIndex=middleElement+1;
    }
    return -1;

}

int main(){
    vector<int> a(5);
    int key=7;
    binarySearch(a,key);

}