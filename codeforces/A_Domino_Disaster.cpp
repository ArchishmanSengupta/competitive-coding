#include<iostream>
#include<string>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c1='U',c2='D';
        string s,res;
        cin>>s;
         int l = s.length();
    for (int i = 0; i < l; i++) {
        if (s[i] == c1)
            s[i] = c2;
        else if (s[i] == c2)
            s[i] = c1;
    }
        cout<<s<<endl;
        
    }
}