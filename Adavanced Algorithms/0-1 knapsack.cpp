#include<bits/stdc++.h>
using namespace std;

//1. Recursive function
int knapsack(int wt[],int val[],int w,int n){
	//1. Base Condition 
	//if null or zero, i can't maximize the profit
	//so we return zero
	
	if(n==0|| w==0)
	return 0;
	
	/* Doing memoziation here
	afetr making an global matrix and initializating the value 
	to -1 then storing the value
	*/
	if(dp[n][w]!=-1)
	return dp[n][w];
	
	//2. Choice Diagram
	//basically what we are here is we are going from the last array and checking
	if(wt[n-1]<=w)
	return dp[n][w]= max(val[n-1]+knapsack(wt,val,w-wt[],n-1),knapsack(wt,val,w,n-1));
	
	else if(wt[n-1]>w)
		return dp[n][w]=knapsack(we,val,w,n-1);
}

int main(){
	int n;
	cin>>n;
	int dp[n][w];
	memset(dp,-1,sizeof(dp));
	knapsack();
	return 0;
}
