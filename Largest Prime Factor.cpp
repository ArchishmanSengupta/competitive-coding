#include<iostream.h>
#include<math.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    bool flag;
    int largest_factor=-1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=true;
            for(int j=2;j<sqrt(i);i++)
            {
                if(i%j==0)
                {
                    flag=false;
                }
            }
            if(flag==true)
            {
                largest_factor=i;
            }
        }
    }
    if(largest_factor>0)
    {
        cout<<largest_factor;
    }
    else
    {
        cout<<"error";
    }
    return 0;
}
