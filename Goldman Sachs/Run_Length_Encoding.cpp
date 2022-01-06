#include<bits/stdc++.h>
using namespace std;

string encode(string src){
    string s=src;
  string res="";
  long long int n=s.length();
  
  long long int count=1;
  for(int i=0;i<n;i++){
      count=1;
        while(i<n-1 and s[i]==s[i+1]){
            count++;
            i++;
        }
  
      res+=s[i]+to_string(count);
  }
 return res;
}
int main(){
    string inputString ="aaaabbbccc";
    // a4b3c3
    cout<<encode(inputString);
}