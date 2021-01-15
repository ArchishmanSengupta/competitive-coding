#include<bits/stdc++.h>
#define in(n,arr) for(int i=0;i<n;++i) cin>> arr[i]
#define out(n,arr) for(int i=0;i<n;++i) cout<<arr[i]<<" "
#define ll long long int
using namespace std;
int main()
{
	ios_base::sync_withstdio(false);
	cin.tie(NULL);
	#ifdef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		int len;
		cin>>len;
		string s;
		cin>>s;
		unordered_map<string,char> binary={{"0000",'a'},
		{"0001",'b'},
		{"0010",'c'},
		{"0011",'d'},
		{"0100",'e'},
		{"0101",'f'},
		{"0110",'g'},
		{"0111",'h'},
		{"1000",'i'},
		{"1001",'j'},
		{"1010",'k'},
		{"1011",'l'},
		{"1100",'m'},
		{"1101",'n'},
		{"1110",'o'},
		{"1111",'p'}
		};
		for(int i=0;i<len;i+=4)
		{
			cout<<binary[s.substr(i,4);
		}
		cout<<endl;
	}
	return 0;
}
