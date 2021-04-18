#include <bits/stdc++.h>
using namespace std;

/*******  All Required define Pre-Processors for Optimizations *******/
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("O3")
#pragma GCC target("sse4")

/**************************************/

/*******  All Required define Pre-Processors and typedef Constants *******/
#define ll long long
#define ld long double
#define endl '\n'
#define si(t) scanf("%d", &t)
#define sl(t) scanf("%ld", &t)
#define sll(t) scanf("%lld", &t)
#define sc(t) scanf("%c", &t)
#define ss(t) scanf("%s", &t)
#define sf(t) scanf("%f", &t)
#define slf(t) scanf("%lf", &t)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%ld\n", x)
#define pll(x) printf("%lld\n", x)
#define pf(x) printf("%f")
#define sz(x) (int)(x).size()
#define mem(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (ll i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (ll i = j; i >= k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(x) x.begin(), x.end()
#define inputarr(a, n)          \
    for (int i = 0; i < n; ++i) \
    cin >> a[i]
#define max_3(a, b, c) max(a, max(b, c))
#define min_3(a, b, c) min(a, min(b, c))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert(B <= A && A <= C)
#define sortall(x) sort(all(x))
#define mp make_pair
#define pb push_back
#define PI 3.1415926535897932384626433832795
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define read(type) readInt<type>()
const double pi = acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<ll> VLL;
typedef vector<string> VS;
typedef vector<PII> VPI;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef map<ll, ll> MPLL;
typedef set<int> SETI;
typedef multiset<int> MSETI;
/********** solve()  function **********/
void solve(){
	int n;
	cin>>n;
	ll store1[n], ct=0,cm=0, store2[n],temp=0;
	char s;
	for(ll i=0;i<n;i++){
		cin>>s;
		if(s=='M')
		{
			store2[cm]=i;
			cm++;
		}
		else{
			store1[ct]=i;
			ct++;
		}	
	}
	if(cm+cm!=ct)
	cout<<"NO"<<"\n";
	else{
		for(ll i=0;i<n/3;i++){
			if(!(store1[i]<store2[i] && store2[i]<store1[i+n/3]))
			temp++;
		}
		if(temp==0){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
		
	}
}

/********  solve() Ends Here *************/

/********** Main()  function **********/
int main()
{
    /* #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif */

    /*__*/ double start = clock(); /*__*/

    //______________________________________
    ll T;
    sll(T);
    while (T--)
    {
        solve();
    }
    //______________________________________
    cerr << "Time: " << (clock() - start) * 1.0 / CLOCKS_PER_SEC << setprecision(3) << "s\n";
}
/********  Main() Ends Here *************/
