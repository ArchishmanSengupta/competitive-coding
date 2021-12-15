// ######      ###      #######    #######    ##     #     #####        ###     ##### //
// #     #    #   #          #        #       # #    #    #     #      #   #     ###  //
// #     #   #     #        #         #       #  #   #   #       #    #     #    ###  //
// ######   #########      #          #       #   #  #   #           #########    #   //
// #     #  #       #     #           #       #    # #   #    ####   #       #    #   //
// #     #  #       #    #            #       #     ##   #    #  #   #       #        //
// ######   #       #   #######    #######    #      #    #####  #   #       #    #   //

#include <bits/stdc++.h>
//#include <beaufort.h>
// #include "geodeb.h"

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize ("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
// #pragma comment(linker, "/stack:200000000")
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;
/*
useful links:
http://www.cplusplus.com/reference/vector/vector/
http://www.cplusplus.com/reference/stl/
*/

#define ArchishmanSengupta() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define var -1000000000000
#define MOD1 998244353
//#define INF 2e18
#define fo(i,n) for(ll i=0;i<n;i++)
#define fo1(i,a,n) for(ll i=a;i<=n;i++)
#define fo3(val,x) for(auto val : x)
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
//#define take(n) ll n;cin>>n;
//#define takes(x) string x; cin>>x;

#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define usi unordered_set<int>
#define re(x) for(auto &val :x){cin>>val;}
#define all(x) (x).begin(), (x).end()
#define sortall(x) sort(all(x))
#define ry 8
#define sortbig(x) sort(all(x),greater<int>())
#define tr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define vin(x,v) for(auto &x:v) cin>>x;
#define ERASE(x) sort(x.begin(),x.end()); x.erase(unique(x.begin(),x.end()),x.end())
#define Rev(a) reverse(all(a))
#define Uniq(a) sort(all(a));a.erase(unique(all(a)),end(a))
#define vec(type,name,...) vector<type>name(__VA_ARGS__)
#define VEC(type,name,size) vector<type>name(size);in(name)
#define vv(type,name,h,...) vector<vector<type>>name(h,vector<type>(__VA_ARGS__))
#define VV(type,name,h,w) vector<vector<type>>name(h,vector<type>(w));in(name)
#define vvv(type,name,h,w,...) vector<vector<vector<type>>>name(h,vector<vector<type>>(w,vector<type>(__VA_ARGS__)))
#define short long long int


#ifndef ONLINE_JUDGE  // Set
#define debarr(a,n) cerr<<#a<<":";for(int i=0;i<n;i++)cerr<<a[i]<<" ";cerr<<endl;
#define debmat(mat,row,col) cerr<<#mat<<":\n";for(int i=0;i<row;i++){for(int j=0;j<col;j++)cerr<<mat[i][j]<<" ";cerr<<endl;}
#define inf 1000000000000000005
//archi1808
#define MAX 100001
#define debug(x) cerr << #x <<" ";_print(x);cerr <<endl;
#else
#define debug(x)
#endif



//using ll = long long;
typedef double dou;
typedef long long ll;
// typedef long long int _short;
typedef unsigned long long ull;
typedef string _thread;
typedef long double lld;
typedef pair<int, int>	pii;
typedef pair<string, string> pss;
typedef pair<ll, ll>	pl;
typedef vector<int64_t>		vi;
typedef vector<ll>		vl;
typedef vector<string>  vs;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
typedef tree <pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class RAIter, class Compare>vector<size_t> argSort(RAIter first, RAIter last, Compare comp) {
	vector<size_t> idx(last - first); iota(idx.begin(), idx.end(), 0); auto idxComp = [&first, comp](size_t i1, size_t i2) {return comp(first[i1], first[i2]);}; sort(idx.begin(), idx.end(), idxComp); return idx;
}
//template<typename T> class Node{T data}; Node<T> *next; //LL
template <class T> void _print(vector <T> v);
template<typename...T> void capture__(T&...args) {((cin >> args), ...);}
template<typename T> bool mmax(T &m, const T q) { if (m < q) {m = q; return true;} else return false; }
template<typename T> bool mmin(T &m, const T q) { if (m > q) {m = q; return true;} else return false; }
template<class T> bool chmax(T&a, const T&b) {if (a < b) {a = b; return 1;} return 0;}
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
//int mod = 1e9 + 7;
const int mod = 1e9 + 7;

ll globalVariable = 1e18;
const int MAX_CHAR = 26;
const string YES = "YES", NO = "NO";
const ll N = 1e5 + 2;

/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);} // a.b(gcd(a,b))
//ll fancy(ll x) all_of(all(v), [](int x)(return x % 2 == 0;)) << nline;
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3


ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
ll mul(int a, int b) {return (a * b) % mod;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
/*dijkstra algorithm
void dij(int C) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	dist[C] = 0; pq.push({0, C}); while (pq.size() > 0) {
		pair<int, int> alpha = pq.top(); pq.pop(); for (auto x : graph[alpha.second]) {
			if (dist[x.first] > dist[alpha.second] + x.second) {
				dist[x.first] = dist[alpha.second] + x.second; pq.push({dist[x.first], x.first});
			}
		}
	}
}
dijkstra algorithm*/

/*--------------------------------------------------------------------------------------------------------------------------*/

const int MAX_N = 200 * 1000 + 5;
char a[MAX_N];

// ASCII Uppercase 65-90
// ASCII Lowercase 97-122
/* Atcoder Testcase https://www.dropbox.com/sh/nx3tnilzqz7df8a/AAAYlTq2tiEHl5hsESw6-yfLa?dl=0 */

//------------------------------------Code Here-----------------------------------------

/*
1. DP se soch
2. DP se soch
3. DP se soch
graph,gcd,BS,seive
if NOTA then,
brute force hi optimal h  */

/*
LEARN FROM HERE:https://codeforces.com/blog/entry/57282
*/


void solve() {
	_thread s, res = "";
	short countlower = 0, countupper = 0;
	capture__(s);
	short n = s.length();
	fo(i, n) {
		if (islower(s[i])) {
			countlower++;
		}
		else countupper++;
		debug(countupper) debug(countlower)
	}
	if (countupper > countlower) {
		for_each(s.begin(), s.end(), [](char & c) {c = ::toupper(c);});
		cout << s;
	} else {
		for_each(s.begin(), s.end(), [](char & c) {c = ::tolower(c);});
		cout << s;
	}
}


//-----------------------------------Driver Function------------------------------------
int main() {
	ArchishmanSengupta();
	//GD_INIT("geodeb.html");
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("outputtt.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	ArchishmanSengupta();
	ArchishmanSengupta();
	auto start1 = high_resolution_clock::now();
	// ll test;
	// cin >> test;
	ll test = 1;
	for (int i = 0; i < test; i++) {
		solve();
		cout << nline;
	}
	//solve();

	auto stop1 = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef ONLINE_JUDGE
	cerr << "Time: " << duration . count() / 1000 << endl;
#endif
}


