#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  int arr1[1001],arr2[1001];
  set<int> all;
  set<int> res;
  set<int> kichu;
  for(int i=0;i<n;i++)
  {
    cin>>arr1[i];
    all.insert(arr1[i]);
  }
  
  for(int i=0;i<m;i++)
  {
    cin>>arr2[i];
    kichu.insert(arr2[i]);
    if(!all.count(arr2[i]))
    {
      res.insert(arr2[i]);
    }
  }
  for(int i=0;i<n;i++)
  {
    if(!kichu.count(arr1[i]))
    {
      res.insert(arr1[i]);
    }
  }
  for (auto it =res.begin(); it != res.end(); ++it)
        cout << '' << *it;
  cout<<endl;
  return 0;
}