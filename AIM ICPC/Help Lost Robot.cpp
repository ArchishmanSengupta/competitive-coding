#include <iostream>
#include <unordered_map>
#include <map>
#include <queue>
#include <stack>
#include <unordered_set>
#include <set>
#include <string> 
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    
    long long t;
    cin >> t;
    while(t--)
    {
    	int x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	if(x1<x2 && y1==y2)
	{
		cout<<"right";
	}
	else if(x1>x2 && y1==y2){
		cout<<"left";
	}
	else if(y1<y2 && x1==x2)
	{
		cout<<"up";
	}
	else if(y1>y2 && x1==x2){
		cout<<"down";
	}
	else{
		cout<<"sad";
	}
	cout<<endl;
    }
}
