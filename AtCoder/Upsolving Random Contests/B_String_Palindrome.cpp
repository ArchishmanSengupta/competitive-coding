#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;

bool isPalindrome(string s){
    string t(s.rbegin(),s.rend());
    return s==t;
}
int main(){
    string s;
    cin>>s;
    int n=s.size();
    if(isPalindrome(s) && isPalindrome(s.substr(0,(n-1)/2)) && isPalindrome(s.substr(0,n+1/2)))
    {
        cout<<"Yes";
    }
    else cout<<"No";
    
    return 0;
}