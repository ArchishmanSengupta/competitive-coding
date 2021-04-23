/*DP
Q. You are given an array of N distinct integers and a number K.
You have to find the number of paths in the array.
[the path can start from anywhere, it can end anywhere]

The Rules:

1. For any two consecutive elements P(i) and P(i+1), P(i+1)>P(i)
2. For any two consecutive elements P(i+1)-P(i)<=K


How many paths can we create?

Constraints: 
N<=10
K=10e18


*/
// Solution 

#include<bits/stdc++.h>
using namespace std;

const int N=10;
int n,k;
int a[N];
int dp[N];
bool vis[N];
//The optimal solution is nlogn


// 1 8 2 9, K=1
//The next number is x, the next number 'y
//X<Y<X+K'
// 1
// 1 2
// 8 
// 8 9
// 2
// 9 


//1 3 2 9
//if we want to know f(1)
// A path will always consist of a singlr element=1
//Let's say our next path is 2, then how many paths 
//can we make starting with 2
//f(1)=1+f(2)=3
//f(2)=1+f(3)=2
//f(3)=1

//1
// 1 2
//1 2 3
//2 
//2 3
//3 
//9

//The brute force costs something like o(2^N.N)
//Let's say K is insanely high
//we can make a path between any set of elements?
// The number of paths=The number of sets in the array
//2^N



//The condition for whether we can add an element to a path
// which is limited to the path itself
// If we are starting our path at
//index x, how many paths can we create of size>=1

//f(1)=1+f(2)=3	- standard recursive solution
//1
//1 2
//1 2 3

//f(2)=1+f(3)=2
//f(3)=1

//one goal of DP is to reduce recalculations
//Memoisation-> Calculating a function only once
int totalcalls=0; //totalcalls =functioncalls+no of times our memoisation worked
int functioncalls=0;// When we ran through the entire function

int f(int x){
totalcalls++;
  int ToReturn =0;
  //Any path can consist of the element by itself
  ToReturn=1;
  if(vis[x]) return dp[x];
  functioncalls++;
  vis[x]=true;
  for(int NextItem=0;NextItem<n;NextItem++){
    //a[nextItem]> a[x]
    // a[nextItem] -a[x]<=K

    if(a[NextItem]> a[x] && a[NextItem]-a[x]<=k){
      ToReturn+=f(NextItem);
    }
  }
  return dp[x]=ToReturn;

}

int main(){
  cin>>n>>k;
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i=0;i<n;i++)
    vis[i]=false;

  int res=0;
  for(int i=0;i<n;i++){
    res=res+f(i);
  }
  cout<<res<<"\n";
  cout<<"Total Calls : "<<totalcalls<<endl;
  cout<<"Function calls: "<<functioncalls<<endl;
}
