#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    std::cin >> n;
    for(int i=0;i<n;i++)
    {
        string s;
        int a=0,b=0,c=0,d=0;
        cin>>s;
        for(int j=0;j<s.length()&&s.length()>=10;j++)
        {
        	
            if(s[j]>=97&&s[j]<=122)
            {
                a++;
               // cout<<s[j]<<"a"<<endl;
            }
            else if(s[j]>=65&&s[j]<=90)
            {
                if(j>0&&j<(s.length()-1))
            	{
	                b++;
	                //cout<<s[j]<<"c"<<endl;
            	}
                //cout<<s[j]<<"b"<<endl;
            }
            else if(s[j]>=48&&s[j]<=57)
            {
            	if(j>0&&j<(s.length()-1))
            	{
	                c++;
	                //cout<<s[j]<<"c"<<endl;
            	}
            }
            else if((s[j]==64)||(s[j]==35)||(s[j]==63)||(s[j]==37)||(s[j]==38))
            {
                if(j>0&&j<(s.length()-1))
            	{
	                d++;
	                //cout<<s[j]<<"c"<<endl;
            	}
                
            	//cout<<s[j]<<"d"<<endl;
            }
            
        }
        if((a>0)&&(b>0)&&(c>0)&&(d>0))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
            //cout<<s[j]<<"break"<<endl;
        }
    }
	return 0;
}
