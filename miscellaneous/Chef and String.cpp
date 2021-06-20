#include<bits/stdc++.h>
//#pragma GCC optimize("Ofast")
//#pragma GCC optimize ("unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma comment(linker, "/stack:200000000")
using namespace std;
#define F first
#define S second
#define EB emplace_back
#define MP make_pair
#define all(o) (o).begin(), (o).end()
#define mset(m,v) memset(m,v,sizeof(m))
#define fr(i,n) for(lli i=0;i<(n);++i)
#define rep(i,a,b) for(lli i=a;i<=b;++i)
#define per(i,a,b) for(lli i=a;i>=b;i--)
#define remin(a,b) (a=min((a),(b)))
#define remax(a,b) (a=max((a),(b))) 
#define sz(x) (lli)(x).size()
#define endl '\n'
typedef long long lli;        typedef long double ld;
typedef pair<lli,lli> ii;     typedef vector<lli> vi;
typedef vector<ii> vii;       typedef vector<vi> graph;
long long MOD=1000000007;     long double EPS=1e-9;
#ifndef ONLINE_JUDGE
#define debarr(a,n)cerr<<#a<<":";for(int i=0;i<n;i++)cerr<<a[i]<<" ";cerr<<endl;
#define debmat(mat,row,col)cerr<<#mat<<":\n";for(int i=0;i<row;i++){for(int j=0;j<col;j++)cerr<<mat[i][j]<<" ";cerr<<endl;}
#define pr(...)dbs(#__VA_ARGS__,__VA_ARGS__)
template<class S,class T>ostream &operator<<(ostream &os,const pair<S,T> &p){return os<<"("<<p.first<<","<<p.second<<")";}
template<class T>ostream &operator<<(ostream &os,const vector<T> &p){os<<"[";for(auto&it:p)os<<it<<" ";return os<<"]";}
template<class T>ostream &operator<<(ostream &os,const set<T>&p){os<<"[";for(auto&it:p)os<<it<<" ";return os<<"]";}
template<class T>ostream &operator<<(ostream &os,const multiset<T>&p){os<<"[";for(auto&it:p)os<<it<<" ";return os<<"]";}
template<class S,class T>ostream &operator<<(ostream &os,const map<S,T>&p){os<<"[";for(auto&it:p)os<<it<<" ";return os<<"]";}
template<class T>void dbs(string str,T t){cerr<<str<<":"<<t<<"\n";}
template<class T,class...S>void dbs(string str,T t,S... s){int idx=str.find(',');cerr<<str.substr(0,idx)<<":"<<t<<",";dbs(str.substr(idx+1),s...);}
#else
#define pr(...){}
#define debarr(a,n){}
#define debmat(mat,row,col){}
#endif
lli binpow(lli b,lli p,lli mod){lli ans=1;b%=mod;for(;p;p>>=1){if(p&1)ans=ans*b%mod;b=b*b%mod;}return ans;}

void pre(){

}

void solve(){
    string s;
    cin>>s;
    int n=s.length();
    if(n==1){
        cout<<"YES\n";return;
    }
    string temp1= s.substr(1)+s[0];
    string temp2= s[n-1]+s.substr(0,n-1);
    if(temp2==temp1){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //cout<<fixed<<setprecision(15);
    //clock_t begin = clock();
    pre();lli _t=1;cin>>_t;
    for(lli i=1;i<=_t;i++){
        //cout<<"Case #"<<i<<": ";
        solve();
    }
    // clock_t end = clock();double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;cerr << elapsed_secs;
}
