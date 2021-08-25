// ######      ###      #######    #######    ##     #     #####        ###     ##### //
// #     #    #   #          #        #       # #    #    #     #      #   #     ###  //
// #     #   #     #        #         #       #  #   #   #       #    #     #    ###  //
// ######   #########      #          #       #   #  #   #           #########    #   //
// #     #  #       #     #           #       #    # #   #    ####   #       #    #   //
// #     #  #       #    #            #       #     ##   #    #  #   #       #        //
// ######   #       #   #######    #######    #      #    #####  #   #       #    #   //

#include<bits/stdc++.h>
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
#define INF 2e18
#define fo(i,n) for(ll i=0;i<n;i++)
#define fo3(val,x) for(auto val : x)
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define re(x) for(auto &val :x){cin>>val;}
#define all(x) (x).begin(), (x).end()
#define sortall(x) sort(all(x))
#define tr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define vin(x,v) for(auto &x:v) cin>>x;
#ifndef ONLINE_JUDGE  // Set
#define debarr(a,n) cerr<<#a<<":";for(int i=0;i<n;i++)cerr<<a[i]<<" ";cerr<<endl;
#define debmat(mat,row,col) cerr<<#mat<<":\n";for(int i=0;i<row;i++){for(int j=0;j<col;j++)cerr<<mat[i][j]<<" ";cerr<<endl;}
//archi1808
#define debug(x) cerr << #x <<" ";_print(x);cerr <<endl;
#else
#define debug(x)
#endif
//using ll = long long;
typedef double dou;
typedef long long ll;
typedef long long int lli;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
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
//template<typename T> class Node{T data}; Node<T> *next; //LL
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
int mod = 1e9 + 7;
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
/*--------------------------------------------------------------------------------------------------------------------------*/
ll globalVariable = 1e18;

// 1. DP se soch
// 2. DP se soch
// 3. DP se soch
// graph,gcd,BS,seive
// if NOTA then,
// brute force hi optimal h


// int arraySize[10000000]; // MaxSize is 10^7 global

// Trying to understand the code from github profile name-> manishbhist
// and shamelessly copying
ll n, i, j, res, m;
double getAngle(pair<dou, dou> c, pair<dou, dou>p) {
	double result = (atan2(p.second - c.second, p.first - c.first)) * 180 / 3.142857143;
	if (result < 0) {
		result += 360;
	}
	return result;

}
double getRadius(pair<dou, dou> c, pair<dou, dou>p) {
	return (abs(p.first - c.first) * abs(p.first - c.first)) + (abs(p.second - c.second) * abs(p.second - c.second));

}
void solve() {
	ll n, i, j, res, m;
	double angle;
	pair<double, double> p, ss, se, c;
	cin >> m >> p.first >> p.second;

	if (m == 0) {
		cout << "white" << nline;
	}
	else {
		angle = 3.6 * m;
		c.first = 50;
		c.second = 50;

		if (getAngle(c, p) <= angle and getRadius(c, p) <= 2500) {
			cout << "black" << nline;
		}
		else {
			cout << "white" << nline;
		}
	}
}

int main() {
	ArchishmanSengupta();
	//GD_INIT("geodeb.html");
#ifndef ONLINE_JUDGE

	// ifstream fin("input.txt");
	// ofstream fout("out.txt");
	//ofstream fout("error.txt");
	freopen("input.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	ArchishmanSengupta();
	ArchishmanSengupta();
	auto start1 = high_resolution_clock::now();

	ll t; cin >> t;
	fo(i, t) {
		cout << "Case #" << i + 1 << ": ";
		solve();
	}

	// ll test ;
	// cin >> test;
	// while (test--) {
	// 	solve();
	// 	//cout << nline;
	// 	//correctSolution();
	// }

	//solve();
	// cout << nline;

	//greedy,constructive, math,number theory
	//gcd
	/*
	Sequential -Vectors,deque,list
	Associative: set, multiset,map, multimap
	Adaptors: stack,queue, priority_queue

	*/
	// GENERATE TEST CASES

	//srand(time(NULL));
	// int t = rand() % 10 + 1;
	// cout << t << endl;
	// while (t--) {
	// 	int n = rand() % 100000 + 1;
	// 	cout << n << endl;
	// 	for (int i = 0; i < n; i++) {
	// 		cout << (rand() % 1000000 + 1) << " ";
	// 	}
	// 	cout << endl;
	// }

	auto stop1 = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef ONLINE_JUDGE
	cerr << "Time: " << duration . count() / 1000 << endl;
#endif
}



