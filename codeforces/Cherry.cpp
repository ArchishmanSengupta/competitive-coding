
// BoilerPlate 2

// ######      ###      #######    #######    ##     #     #####        ###     ##### //
// #     #    #   #          #        #       # #    #    #     #      #   #     ###  //
// #     #   #     #        #         #       #  #   #   #       #    #     #    ###  //
// ######   #########      #          #       #   #  #   #           #########    #   //
// #     #  #       #     #           #       #    # #   #    ####   #       #    #   //
// #     #  #       #    #            #       #     ##   #    #  #   #       #        //
// ######   #       #   #######    #######    #      #    #####  #   #       #    #   //


#include <bits/stdc++.h >
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
//#include <boost/algorithm/string.hpp>
using namespace std;

#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <bitset>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ll, double> pld;
typedef pair<double, double> pdd;
typedef pair<double, ll> pdl;
typedef pair<int, char> pic;
typedef vector<ll> vl;
typedef vector<pll> vpll;
typedef vector<int> vi;
typedef priority_queue<ll, vector<ll>, greater<ll>> llgreaterq;
typedef priority_queue<pll, vector<pll>, greater<pll>> pllgreaterq;
typedef priority_queue<pair<ll, pll>, vector<pair<ll, pll>>, greater<pair<ll, pll>>> plpllgreaterq;
typedef priority_queue<vi, vector<vi>, greater<vi>> vigreaterq;
typedef priority_queue<vl, vector<vl>, greater<vl >> vlgreaterq;

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

//void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

template <class o, class p, class q>
using tuple3q = priority_queue<tuple<o, p, q>, vector<tuple<o, p, q>>, greater<tuple<o, p, q>>>;
template <class o, class p, class q, class r>
using tuple4q = priority_queue<tuple<o, p, q, r>, vector<tuple<o, p, q, r>>, greater<tuple<o, p, q, r>>>;
template <class o, class p, class q, class r, class s>
using tuple5q = priority_queue<tuple<o, p, q, r, s>, vector<tuple<o, p, q, r, s>>, greater<tuple<o, p, q, r, s>>>;
int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, -1, 0, 1 };
#define debug(x) cerr << #x <<" ";_print(x);cerr <<endl;
#define nline "\n"
#define bit(x,v) ((ll)x << v)
#define fo(x,n) for(ll x = 0;x < n;x++)
#define fo2(x,f,v) for(ll x=f;x<v;x++)
#define for3(v,x) for(auto v : x)
#define EPS (1e-10)
#define EQ(a,b) (std::abs(a-b) < EPS)
#define Baphu() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()) )
#define all(a) a.begin(),a.end()
#define all0(a) memset(a,0,sizeof(a))
#define allm1(a) memset(a,-1,sizeof(a))
#define set_float() cout << fixed << setprecision(10);
#define put_float(v) 	set_float() \
						cout << v << endl
#define put(v) cout << v << endl
#define vinsert(v,p,x) v.insert(v.begin() + p,x)
#define vsort(v) sort(all(v));
#define vdesc(v) vsort(v); \
				 reverse(all(v))
#define dup(v) v.erase(unique(all(v)),v.end())
#define ion(i,j) ((i & (1LL << j)) > 0)
#define next(i) i++;i%=2
#define Len size()
#define psp(a,b) push_back(make_pair(a,b))
#define psp2(a,b) push(make_pair(a,b))
#define cin(a) a; cin >> a
#define infa(a,b) (a + b) % INF
#define infm(a,b) (a * b) % INF
#define infd(a,b) (a * INFinv(b)) % INF
#define infs(a,b) (a + INF - inff(b)) % INF
#define inf(a) (a) %= INF
#define inff(a) ((a + INF) % INF)
#define No cout << "No" << endl
#define Yes cout << "Yes" << endl
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define smal -INF*INF
#define big INF*INF
#define frontpop(q) q.front();q.pop()
#define toppop(q) q.top();q.pop()
#define arr(a,s) a[s]; all0(a);
#define nxt(cu) (cu+1) % 2

bool chmin(ll& a, ll b) { if (a > b) { a = b; return 1; } return 0; }
ll INF = 1000000007;
const int MAX = 2000010;
void cout2(ll val) {
	if (val == big) {
		cout << -1 << endl;
	}
	else {
		cout << val << endl;
	}
}
long long fac[MAX], finv[MAX], inv[MAX];
void COMinit() {
	fac[0] = fac[1] = 1;
	finv[0] = finv[1] = 1;
	inv[1] = 1;
	for (int i = 2; i < MAX; i++) {
		fac[i] = fac[i - 1] * i % INF;
		inv[i] = INF - inv[INF % i] * (INF / i) % INF;
		finv[i] = finv[i - 1] * inv[i] % INF;
	}
}

long long COM(int n, int k) {
	if (n < k) return 0;
	if (n < 0 || k < 0) return 0;
	return fac[n] * (finv[k] * finv[n - k] % INF) % INF;
}

ll getpow(ll b, ll x, ll md) {
	ll t = b;
	ll res = 1;
	while (x > 0)
	{
		if (x & 1) {
			res *= t;
			res %= md;
		}
		x >>= 1;
		t *= t;
		t %= md;
	}
	return res % md;
}
ll getpow(ll b, ll x) {

	return getpow(b, x, INF);
}
ll modinv(ll x) {
	return getpow(x, INF - 2);
}

ll extgcd(ll a, ll b, ll& x, ll& y) {
	ll d = a;
	if (b != 0) {
		d = extgcd(b, a % b, y, x);
		y -= (a / b) * x;
	}
	else {
		x = 1; y = 0;
	}
	return d;
}

/// </summary>
/// <param name="a"></param>
/// <param name="m"></param>
/// <returns></returns>
ll modinv(ll a, ll m) {
	ll x, y;
	extgcd(a, m, x, y);
	return (m + x % m) % m;
}

ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

class mint {
	int md = 1000000007;
public:
	long long x;
	mint(ll x, ll md) {
		this->md = md;
		this->x = (x % md + md) % md;
	}
	mint(long long x = 0) : x((x % md + md) % md) {}
	mint operator-() const {
		return mint(-x);
	}
	mint& operator+=(const mint& a) {
		if ((x += a.x) >= md) x -= md;
		return *this;
	}
	mint& operator-=(const mint& a) {
		if ((x += md - a.x) >= md) x -= md;
		return *this;
	}
	mint& operator*=(const  mint& a) {
		(x *= a.x) %= md;
		return *this;
	}
	mint operator+(const mint& a) const {
		mint res(*this);
		return res += a;
	}
	mint operator-(const mint& a) const {
		mint res(*this);
		return res -= a;
	}
	mint operator*(const mint& a) const {
		mint res(*this);
		return res *= a;
	}
	mint pow(ll t) const {
		if (!t) return 1;
		mint a = pow(t >> 1);
		a *= a;
		if (t & 1) a *= *this;
		return a;
	}
	// for prime INF
	mint inv() const {
		return pow(md - 2);
	}
	mint& operator/=(const mint& a) {
		return (*this) *= a.inv();
	}
	mint operator/(const mint& a) const {
		mint res(*this);
		return res /= a;
	}

	friend ostream& operator<<(ostream& os, const mint& m) {
		os << m.x;
		return os;
	}
};

int pr[500010];
int lank[500010];
void uini(int _n) {
	for (ll i = 0; i <= _n; i++)
	{
		pr[i] = i;
		lank[i] = 1;
	}
}

int parent(int x) {
	if (x == pr[x]) return x;
	return pr[x] = parent(pr[x]);
}

int same(int x, int y) {
	return parent(x) == parent(y);
}

bool unit(int x, int y) {

	int px = parent(x);
	int py = parent(y);

	if (px == py) return false;
	if (lank[py] < lank[px]) {
		pr[py] = px;
		lank[px] += lank[py];
	}
	else {
		pr[px] = py;
		lank[py] += lank[px];
	}
	return true;
}
ll wit[500010];
map<ll, ll> mp[100010];
ll parent2(ll x) {
	if (x == pr[x]) return x;
	ll o = pr[x];
	pr[x] = parent2(o);
	wit[x] += wit[o];
	return pr[x];
}
int same2(int x, int y) {
	return parent2(x) == parent2(y);
}
bool relate(int x, int y, int v) {

	auto px = parent2(x);
	auto py = parent2(y);
	ll xd = wit[x];
	ll yd = wit[y];

	if (px == py)
		return false;
	if (xd + v > yd) {
		pr[py] = px;

		wit[py] = xd + v - yd;
	}
	else {
		pr[px] = py;
		wit[px] = yd - (xd + v);
	}
	return true;
}

ll n, m;
int ci = 0;
struct Node {
	int key;
	int priority;
	Node* parent, * left, * right;
	Node(int key, int priority);
	Node() {}
};
Node NIL;
Node::Node(int key, int priority) : key(key), priority(priority) {
	left = &NIL;
	right = &NIL;
}
Node* root = new Node();
void cenrec(Node* k) {
	if (k->key == NIL.key) return;
	cenrec(k->left);
	cout << " " << k->key;
	cenrec(k->right);
}
void fastrec(Node* k)
{
	if (k->key == NIL.key) return;
	cout << " " << k->key;
	fastrec(k->left);
	fastrec(k->right);
}
void insert(Node* v) {
	Node* y = &NIL;
	Node* x = root;
	while (x->key != NIL.key)
	{
		y = x;
		if (v->key < x->key) {
			x = x->left;
		}
		else {
			x = x->right;
		}
	}
	v->parent = y;
	if (y->key == NIL.key) {
		root = v;
	}
	else if (v->key < y->key) {
		y->left = v;
	}
	else {
		y->right = v;
	}

}

Node* find(Node* k, ll v)
{
	if (k->key == NIL.key) return &NIL;
	if (k->key == v) return k;
	if (v < k->key) return find(k->left, v);
	return find(k->right, v);
}
void delp12(Node* x) {
	if (x->key == NIL.key)  return;
	Node* l = x->left;
	Node* r = x->right;
	Node* pr = x->parent;

	if (l->key == NIL.key
	        && r->key == NIL.key) {
		if (pr->left == x) {
			pr->left = &NIL;
		}
		else pr->right = &NIL;
	}
	else if (l->key != NIL.key) {
		if (pr->left == x) {
			pr->left = l;
		}
		else pr->right = l;
		l->parent = pr;
	}
	else if (r->key != NIL.key) {
		if (pr->left == x) {
			pr->left = r;
		}
		else pr->right = r;
		r->parent = pr;
	}
}
Node* get_next(Node* k) {
	if (k->key == NIL.key) return &NIL;
	Node* res = get_next(k->left);
	if (res->key != NIL.key) return res;
	return k;
}
void del(Node* x) {

	if (x->key == NIL.key) return;
	Node* l = x->left;
	Node* r = x->right;
	Node* pr = x->parent;

	if (l->key != NIL.key && r->key != NIL.key) {
		Node* nex = get_next(r);
		x->key = nex->key;
		delp12(nex);
	}
	else {
		delp12(x);
	}
}
Node* rightRotate(Node* t) {
	Node* s = t->left;
	t->left = s->right;
	s->right = t;
	return s;
}
Node* leftRotate(Node* t) {
	Node* s = t->right;
	t->right = s->left;
	s->left = t;
	return s;
}
Node* _insert(Node* t, int key, int priority) {
	if (t->key == NIL.key) {
		return new Node(key, priority);
	}
	if (key == t->key) {
		return t;
	}

	if (key < t->key) {
		t->left = _insert(t->left, key, priority);
		if (t->priority < t->left->priority) {
			t = rightRotate(t);
		}
	}
	else {
		t->right = _insert(t->right, key, priority);
		if (t->priority < t->right->priority) {
			t = leftRotate(t);
		}
	}
	return t;
}
Node* delete1(Node* t, int key);
Node* _delete(Node* t, int key) {
	if (t->left->key == NIL.key && t->right->key == NIL.key) {
		return &NIL;
	}
	else if (t->left->key == NIL.key) {
		t = leftRotate(t);
	}
	else if (t->right->key == NIL.key) {
		t = rightRotate(t);
	}
	else
	{
		if (t->left->priority > t->right->priority) {
			t = rightRotate(t);
		}
		else
			t = leftRotate(t);
	}
	return delete1(t, key);
}
Node* delete1(Node* t, int key) {
	if (t->key == NIL.key) {
		return &NIL;
	}
	if (key < t->key) {
		t->left = delete1(t->left, key);
	}
	else if (key > t->key) {
		t->right = delete1(t->right, key);
	}
	else return _delete(t, key);
	return t;
}
int H;
int left(int i) {
	return i * 2 + 1;
}
int right(int i) {
	return i * 2 + 2;
}
class edge {
public:
	int from, to, i;
	ll val;
	ll cap, rev;
	edge() {}
	edge(ll to) : to(to) {}
	edge(ll to, ll i) : to(to), i(i) {}
	edge(ll from, ll to, ll val) : from(from), to(to), val(val) {}
	void flowEdge(ll _to, ll _cap, ll _rev) {
		to = _to;
		cap = _cap;
		rev = _rev;
	}
};
typedef vector<vector<edge>> vve;

class LCA {
private:
	vector<vector<edge>> v;
	vector<vector<int>> parent;
	vector<int> depth;
	ll root;
	void dfs(int n, int m, int d) {
		parent[0][n] = m;
		depth[n] = d;
		for (auto x : v[n]) {
			if (x.to != m) dfs(x.to, n, d + 1);
		}
	}
public:
	LCA(ll N, ll root, vector<vector<edge>>& tree) {
		v = tree;
		this->root = root;
		parent = vector<vector<int>>(21, vector<int>(N + 1, 0));
		depth = vector<int>(N + 1, 0);
		dfs(root, -1, 0);
		for (int j = 0; j + 1 < 20; j++) {
			for (int i = 1; i <= N; i++) {
				if (parent[j][i] < 0) parent[j + 1][i] = -1;
				else parent[j + 1][i] = parent[j][parent[j][i]];
			}
		}
	}
	int lca(int n, int m) {
		if (depth[n] > depth[m]) swap(n, m);
		if (n == root)
			return root;
		for (int j = 0; j < 20; j++) {
			if ((depth[m] - depth[n]) >> j & 1) m = parent[j][m];
		}
		if (n == m) return n;
		for (int j = 19; j >= 0; j--) {
			if (parent[j][n] != parent[j][m]) {
				n = parent[j][n];
				m = parent[j][m];
			}
		}
		return parent[0][n];
	}
	int dep(int n) { return depth[n]; }
};
ll k;
int _rank[1010];
int temp[1010];
bool compare_sa(int i, int j) {
	if (_rank[i] != _rank[j]) return _rank[i] < _rank[j];
	else {
		int ri = i + k <= n ? _rank[i + k] : -1;
		int rj = j + k <= n ? _rank[j + k] : -1;
		return ri < rj;
	}
}
void construct_sa(string S, int* sa) {
	n = S.length();

	for (ll i = 0; i <= n; i++)
	{
		sa[i] = i;
		_rank[i] = i < n ? S[i] : -1;
	}

	for (k = 1; k <= n; k *= 2)
	{
		sort(sa, sa + n + 1, compare_sa);

		temp[sa[0]] = 0;
		for (ll i = 1; i <= n; i++)
		{
			temp[sa[i]] = temp[sa[i - 1]] + (compare_sa(sa[i - 1], sa[i]) ? 1 : 0);
		}
		for (ll i = 0; i <= n; i++)
		{
			_rank[i] = temp[i];
		}
	}
}
bool contain(string S, int* sa, string T) {
	int a = 0, b = S.length();

	while (b - a > 1) {
		int c = (a + b) / 2;
		if (S.compare(sa[c], T.length(), T) < 0) a = c;
		else b = c;
	}
	return S.compare(sa[b], T.length(), T) == 0;
}


#define bit(x,v) ((ll)x << v)

class BIT {

	static const int MAX_N = 500010;
public:
	BIT() { memset(bit, 0, sizeof(bit)); }
	ll bit[MAX_N + 1], n;
	ll sum(int i) {
		ll s = 0;
		while (i > 0)
		{
			s += bit[i];
			i -= i & -i;
		}
		return s;
	}

	void add(int i, int x) {
		while (i <= n)
		{
			bit[i] += x;
			i += i & -i;
		}
	}


};
struct UnionFind {
	vector<int> A;
	UnionFind(int n) : A(n, -1) {}
	int find(int x) {
		if (A[x] < 0) return x;
		return A[x] = find(A[x]);
	}
	void unite(int x, int y) {
		x = find(x), y = find(y);
		if (x == y) return;
		if (A[x] > A[y]) swap(x, y);
		A[x] += A[y];
		A[y] = x;
	}
	int ngroups() {
		int ans = 0;
		for (auto a : A) if (a < 0) ans++;
		return ans;
	}
};
vector<ll> getp(ll n) {

	vector<ll> res;
	if (n % 2 == 0) {
		res.push_back(2);
		while (n % 2 == 0)n /= 2;
	}

	for (ll i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0) {
			res.push_back(i);
			while (n % i == 0)n /= i;
		}
	}
	if (n != 1) res.push_back(n);
	return res;
}
vector<ll> getp2(ll n) {

	vector<ll> res;
	ll a = 2;
	if (n % 2 == 0) {

		while (n % 2 == 0) { n /= 2; res.push_back(2); }
	}

	for (ll i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0) {

			while (n % i == 0) { n /= i; res.push_back(i); }
		}
	}
	if (n != 1) res.push_back(n);
	return res;
}
vector<pll> getp3(ll n) {
	vector<pll> res;
	int si = 0;
	if (n % 2 == 0) {

		res.push_back(make_pair(2, 0));
		while (n % 2 == 0) { n /= 2; res[si].second++; }
		si++;
	}

	for (ll i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0) {
			res.push_back(make_pair(i, 0));
			while (n % i == 0) { n /= i; res[si].second++; }
			si++;
		}
	}
	if (n != 1) { res.push_back(make_pair(n, 1)); }
	return res;
}

vector<ll> getDivisors(ll n) {

	vector<ll> res;
	res.push_back(1);
	for (ll i = 2; i * i <= n; i++)
	{

		if (n % i == 0) {
			res.push_back(i);
			if (n / i != i)
				res.push_back(n / i);
		}
	}
	return res;
}

struct ve {
public:
	vector<ve> child;
	int _t = INF;
	ve(int t) : _t(t) {}
	ve(ve _left, ve _right) {
		_t = _left._t + _right._t;
		child.push_back(_left);
		child.push_back(_right);
	}
	bool operator<(const ve& t) const {
		return _t > t._t;
	}
};

vector<bool> elas(ll n) {
	n++;
	vector<bool> r(n, 1);
	r[0] = 0;
	r[1] = 0;
	ll tw = 4;
	while (tw < n) {
		r[tw] = false;
		tw += 2;
	}
	ll th = 6;
	while (th < n) {
		r[th] = false;
		th += 3;
	}
	for (ll i = 6; i * i < n; i += 6)
	{
		ll bf = i - 1;
		if (r[bf]) {
			ll ti = bf * 2;
			while (ti < n)
			{
				r[ti] = false;
				ti += bf;
			}
		}
		ll nx = i + 1;
		if (r[nx]) {
			ll ti = nx * 2;
			while (ti < n)
			{
				r[ti] = false;
				ti += nx;
			}
		}
	}
	return r;
}
bool isPrime(ll v) {
	for (ll i = 2; i * i <= v; i++)
	{
		if (v % i == 0) return false;
	}
	return true;
}


class SegTree {

public:
	const static int MAX_N = 1000100;
	const static int DAT_SIZE = (1 << 20) - 1;
	int N, Q;
	int A[MAX_N];
	ll MAX = big;

	ll data[DAT_SIZE], datb[DAT_SIZE];
	void init(int _n) {
		N = 1;
		while (N < _n) N <<= 1;
		memset(data, 0, sizeof(data));
		memset(datb, 0, sizeof(datb));
	}
	void init(int _n, ll iv) {
		N = 1;
		while (N < _n) N <<= 1;
		fo(i, DAT_SIZE) {
			data[i] = iv;
			datb[i] = iv;
		}
	}
	void initRMQ(int _n) {
		N = 1;
		while (N < _n) N *= 2;

		fo(i, 2 * N - 1)
		data[i] = MAX;
	}
	void updateRMQ(int k, ll a) {
		k += N - 1;
		data[k] = a;
		while (k > 0) {
			k = (k - 1) / 2;
			data[k] = min(data[k * 2 + 1], data[k * 2 + 2]);
		}
	}
	ll RMQ(int a, int b) {

		return queryRMQ(a, b + 1, 0, 0, N);
	}
	ll queryRMQ(int a, int b, int k, int l, int r) {
		if (r <= a || b <= l)
			return MAX;

		if (a <= l && r <= b)
			return data[k];


		ll vl = queryRMQ(a, b, k * 2 + 1, l, (l + r) / 2);
		ll vr = queryRMQ(a, b, k * 2 + 2, (l + r) / 2, r);
		return min(vl, vr);
	}

	void add(int a, int b, int x) {
		add(a, b + 1, x, 0, 0, N);
	}
	void add(int a, int b, int x, int k, int l, int r) {
		if (a <= l && r <= b) {
			data[k] += x;
		}
		else if (l < b && a < r) {
			datb[k] += (min(b, r) - max(a, l)) * x;
			add(a, b, x, k * 2 + 1, l, (l + r) / 2);
			add(a, b, x, k * 2 + 2, (l + r) / 2, r);
		}
	}

	void change(int a, int b, int x) {
		change(a, b + 1, x, 0, 0, N);
	}
	void change(int a, int b, int x, int k, int l, int r) {
		if (a <= l && r <= b) {
			data[k] = x;
		}
		else if (l < b && a < r) {
			datb[k] = x;
			change(a, b, x, k * 2 + 1, l, (l + r) / 2);
			change(a, b, x, k * 2 + 2, (l + r) / 2, r);
		}
	}

	ll sum(int a, int b) {
		return sum(a, b + 1, 0, 0, N);
	}
	ll sum(int a, int b, int k, int l, int r) {
		if (b <= l || r <= a) {
			return 0;
		}
		if (a <= l && r <= b) {
			return data[k] * (r - l) + datb[k];
		}

		ll res = (min(b, r) - max(a, l)) * data[k];
		res += sum(a, b, k * 2 + 1, l, (l + r) / 2);
		res += sum(a, b, k * 2 + 2, (l + r) / 2, r);
		return res;
	}
};

class Segment;
class Circle;

class Point {
public:
	double x, y;

	Point(double x = 0, double y = 0) : x(x), y(y) {}

	Point operator + (Point p) { return Point(x + p.x, y + p.y); }
	Point operator - (Point p) { return Point(x - p.x, y - p.y); }
	Point operator * (double a) { return Point(a * x, a * y); }
	Point operator / (double a) { return Point(x / a, y / a); }

	double abs() { return sqrt(norm()); }
	double norm() { return x * x + y * y; }

	bool operator < (const Point& p)const {
		return x != p.x ? x < p.x : y < p.y;
	}
	bool operator == (const Point& p) const {
		return fabs(x - p.x) < EPS && fabs(y - p.y) < EPS;
	}

	static double dot(Point a, Point b) {
		return a.x * b.x + a.y * b.y;
	}

	static double cross(Point a, Point b) {
		return a.x * b.y - a.y * b.x;
	}
	static bool isOrthogonal(Point a, Point b) {
		return EQ(dot(a, b), 0.0);
	}
	static bool isOrthogonal(Point a1, Point a2, Point b1, Point b2) {
		return isOrthogonal(a1 - a2, b1 - b2);
	}
	static bool isOrthogonal(Segment s1, Segment s2);

	static bool isPalallel(Point a, Point b) {
		return EQ(cross(a, b), 0.0);
	}
	static bool isPalallel(Point a1, Point a2, Point b1, Point b2) {
		return isPalallel(a1 - a2, b1 - b2);
	}
	static bool isPalallel(Segment s1, Segment s2);

	static const int COUNTER_CLOCKWISE = 1;
	static const int CLOCKWISE = -1;
	static const int ONLINE_BACK = 2;
	static const int ONLINE_FRONT = -2;
	static const int ON_SEGMENT = 0;
	static int ccw(Point p0, Point p1, Point p2) {
		Point a = p1 - p0;
		Point b = p2 - p0;
		if (cross(a, b) > EPS) return COUNTER_CLOCKWISE;
		if (cross(a, b) < -EPS) return CLOCKWISE;
		if (dot(a, b) < -EPS) return ONLINE_BACK;
		if (a.norm() < b.norm()) return ONLINE_FRONT;
		return ON_SEGMENT;
	}


	static bool intersect(Point p1, Point p2, Point p3, Point p4) {
		return (ccw(p1, p2, p3) * ccw(p1, p2, p4) <= 0
		        && ccw(p3, p4, p1) * ccw(p3, p4, p2) <= 0);
	}
	static bool intersect(Segment s1, Segment s2);
	static Point project(Segment s, Point p);

	static Point reflect(Segment s, Point p);

	static Point getDistance(Point a, Point b) {
		return (a - b).abs();
	}

	static double getDistanceLP(Segment s, Point p);

	static double getDistanceSP(Segment s, Point p);

	static double getDistance(Segment s1, Segment s2);

	static Point getIntersection(Segment s1, Segment s2);

	static pair<Point, Point> crossPoints(Circle c, Segment s);

	static int contains(vector<Point> g, Point p) {
		int n = g.size();
		bool x = false;
		fo(i, n) {
			Point a = g[i] - p, b = g[(i + 1) % n] - p;
			if (std::abs(cross(a, b)) < EPS && dot(a, b) < EPS) return 1;

			if (a.y > b.y) swap(a, b);
			if (a.y < EPS && EPS < b.y && cross(a, b) > EPS) x = !x;
		}
		return x ? 2 : 0;
	}

	static vector<Point> andrewScan(vector<Point> s) {
		vector<Point> u, l;
		if (s.size() < 3) return s;
		sort(all(s));
		u.push_back(s[0]);
		u.push_back(s[1]);
		l.push_back(s[s.size() - 1]);
		l.push_back(s[s.size() - 2]);

		for (int i = 2; i < s.size(); i++) {

			for (int _n = u.size(); _n >= 2 && ccw(u[_n - 2], u[_n - 1], s[i]) > CLOCKWISE; _n--) {
				u.pop_back();
			}
			u.push_back(s[i]);
		}

		for (int i = s.size() - 3; i >= 0; i--) {

			for (int _n = l.size(); _n >= 2 && ccw(l[_n - 2], l[_n - 1], s[i]) > CLOCKWISE; _n--) {
				l.pop_back();
			}
			l.push_back(s[i]);
		}

		reverse(all(l));
		for (int i = u.size() - 2; i >= 1; i--)
		{
			l.push_back(u[i]);
		}

		return l;
	}
	void get_cin() {
		cin >> x >> y;
	}
};

class Segment {
public:
	Point p1, p2;
	Segment() {}
	Segment(Point p1, Point p2) : p1(p1), p2(p2) {}
	void get_cin() {
		cin >> p1.x >> p1.y >> p2.x >> p2.y;
	}
	Point p1tp2() {
		return p2 - p1;
	}
	Point p2tp1() {
		return p1 - p2;
	}
	double abs() {
		return (p2 - p1).abs();
	}
	double norm() {
		return (p2 - p1).norm();
	}
};


bool Point::isOrthogonal(Segment s1, Segment s2) {
	return EQ(dot(s1.p2 - s1.p1, s2.p2 - s2.p1), 0.0);
}


bool Point::isPalallel(Segment s1, Segment s2) {
	return EQ(cross(s1.p2 - s1.p1, s2.p2 - s2.p1), 0.0);
}

bool Point::intersect(Segment s1, Segment s2) {
	return intersect(s1.p1, s1.p2, s2.p1, s2.p2);
}
Point Point::project(Segment s, Point p) {
	Point base = s.p2 - s.p1;
	double r = Point::dot(p - s.p1, base) / base.norm();
	return s.p1 + base * r;
}
Point Point::reflect(Segment s, Point p) {
	return (project(s, p) * 2) - p;
}
double Point::getDistanceLP(Segment s, Point p) {
	return std::abs(cross(s.p2 - s.p1, p - s.p1) / (s.p2 - s.p1).abs());
}
double Point::getDistanceSP(Segment s, Point p) {
	if (dot(s.p2 - s.p1, p - s.p1) < 0.0) return (p - s.p1).abs();
	if (dot(s.p1 - s.p2, p - s.p2) < 0.0) return (p - s.p2).abs();
	return getDistanceLP(s, p);
}
double Point::getDistance(Segment s1, Segment s2) {
	if (intersect(s1, s2)) return 0.0;
	return min({ getDistanceSP(s1, s2.p1), getDistanceSP(s1, s2.p2)
	             , getDistanceSP(s2, s1.p1), getDistanceSP(s2, s1.p2)
	           });
}

Point Point::getIntersection(Segment s1, Segment s2) {
	auto bs = s1.p2 - s1.p1;
	auto n1 = s2.p1 - s1.p1;
	auto n2 = s2.p2 - s1.p1;
	auto c1 = std::abs(cross(n1, bs)) / bs.norm();
	auto c2 = std::abs(cross(n2, bs)) / bs.norm();
	return s2.p1 + (s2.p2 - s2.p1) * (c1 / (c1 + c2));

}

double arg(Point p) { return atan2(p.y, p.x); }
Point polar(double a, double r) { return Point(cos(r) * a, sin(r) * a); }
class Circle {
public:
	Point c;
	double r;
	Circle(Point c = Point(), double r = 0.0) : c(c), r(r) {}
	void get_cin() {
		cin >> c.x >> c.y >> r;
	}
	static pair<Point, Point> getCrossPoints(Circle c1, Circle c2) {
		double d = (c1.c - c2.c).abs();
		double a = acos((c1.r * c1.r + d * d - c2.r * c2.r) / (2 * c1.r * d));
		double t = arg(c2.c - c1.c);
		return make_pair(c1.c + polar(c1.r, t + a), c1.c + polar(c1.r, t - a));

	}
};

pair<Point, Point> Point::crossPoints(Circle c, Segment s) {
	auto pp = project(s, c.c);
	auto f = (pp - c.c).norm();
	auto mu = sqrt(c.r * c.r - f);
	auto e = s.p1tp2() / s.p1tp2().abs();
	return make_pair(pp + e * mu, pp - e * mu);

}

ll divRm(string s, ll x) {

	ll r = 0;
	for (ll i = 0; i < s.size(); i++)
	{
		r *= 10;
		r += s[i] - '0';
		r %= x;
	}
	return r;
}
ll cmbi(ll x, ll b) {

	ll res = 1;
	for (size_t i = 0; i < b; i++)
	{
		res *= x - i;
		res %= INF;
		res *= inv[b - i];
		res %= INF;
	}
	return res;
}

ll digsum(ll x) {
	ll res = 0;
	while (x > 0)
	{
		res += x % 10;
		x /= 10;
	}
	return res;
}
bool check_parindrome(string s) {
	int n = s.size();
	fo(i, n / 2) {
		if (s[i] != s[n - i - 1]) {
			return false;
		}

	}
	return true;
}
ll npr(ll n, ll r) {
	if (r == 0)
		return 1;
	return inff(fac[n] * modinv(fac[n - r]));
}

vl zalgo(string s) {
	ll c = 0;
	vl a(s.size());
	ll si = s.size();
	fo2(i, 1, s.size()) {
		if (i + a[i - c] < c + a[c])
		{
			a[i] = a[i - c];
		}
		else {
			ll j = max(0LL, a[c] - (i - c));
			while (i + j < si && s[j] == s[i + j])
			{
				j++;
			}

			a[i] = j;
			c = i;
		}

	}
	a[0] = s.size();
	return a;
}
string divStrNum(string s, ll v) {
	ll si = s.size();
	ll val = 0;
	string res = "";
	for (ll i = 0; i < si; i++)
	{
		val *= 10;
		val += s[i] - '0';
		ll add = val / v;
		val %= v;
		if (add == 0 && res == "")
			continue;
		res += add + '0';
	}
	if (res == "")
		return "0";

	return res;
}


string difStrNum(string s, ll v) {
	ll si = s.size();
	bool dec = false;
	for (ll i = si - 1; i >= 0; i--)
	{
		if (v == 0)
			break;
		ll t = v % 10;
		v /= 10;
		ll u = (s[i] - '0');
		if (dec) {
			if (u == 0) {
				s[i] = 9 - t;
				dec = true;
				continue;
			}
			u--;
		}
		if (u < t) {
			s[i] = 10 - (t - u);
			dec = true;
		}
		else {
			s[i] -= t;
			dec = false;
		}

	}
	return s;
}
string decStrNum(string s) {
	ll si = s.size();
	for (int i = si - 1; i >= 0; i--)
	{
		if (s[i] == '0') {
			s[i] = '9';
			continue;
		}
		s[i] = s[i] - 1;

		break;
	}
	return s;
}
void dateCal(int x) {
	int lp = x / 7;
	string date[] = { "Monday", "Tuesday", "Wednesday", "Thrusday", "Friday", "Saturday", "Sunday" };
	fo(i, 7) {
		int st = i;
		fo(j, lp) {
			cout << "\t" << date[i] << x << "-" << st << "\t" << "NULL" << "\t" << x << "\t" << st << "\t" << 0 << endl;
			st += 7;
		}
	}
}
typedef vector<vl> mat;
mat mul(mat& A, mat& B) {
	mat C(A.size(), vl(B[0].size()));
	fo(i, A.size()) {
		fo(t, B.size()) {
			fo(j, B[0].size()) {
				C[i][j] = inff(C[i][j] + A[i][t] * B[t][j]);
			}
		}
	}
	return C;
}

mat pow(mat A, ll x) {
	mat B(A.size(), vl(A.size()));
	fo(i, A.size()) {
		B[i][i] = 1;
	}
	while (x > 0)
	{
		if (x & 1)B = mul(B, A);
		A = mul(A, A);
		x >>= 1;
	}
	return B;
}


class dinic {
public:
	vve G;

	vl level;
	vl iter;
	dinic(int _n) : dinic(vve(_n + 1)) {

	}
	dinic(vve g) {
		G = g;
		level = vl(g.size());
		iter = vl(g.size());
	}

	void add_edge(ll from, ll to, ll cap) {
		auto e1 = edge();
		auto e2 = edge();

		e1.flowEdge(to, cap, G[to].size());
		G[from].push_back(e1);
		e2.flowEdge(from, 0, G[from].size() - 1);
		G[to].push_back(e2);
	}

	void bfs(ll s) {
		fill(all(level), -1);
		queue<ll> q;
		level[s] = 0;
		q.push(s);
		while (!q.empty())
		{
			ll v = frontpop(q);
			for (auto e : G[v]) {
				if (e.cap > 0 && level[e.to] < 0) {
					level[e.to] = level[v] + 1;
					q.push(e.to);
				}
			}
		}
	}

	ll dfs(ll v, ll t, ll f) {
		if (v == t)
			return f;
		for (ll& i = iter[v]; i < G[v].size(); i++) {
			edge& e = G[v][i];
			if (e.cap > 0 && level[v] < level[e.to]) {
				ll d = dfs(e.to, t, min(f, e.cap));
				if (d > 0) {
					e.cap -= d;
					G[e.to][e.rev].cap += d;
					return d;
				}
			}
		}
		return 0;
	}

	ll max_flow(ll s, ll t) {
		ll flow = 0;
		for (;;) {
			bfs(s);
			if (level[t] < 0)
				return flow;
			fill(all(iter), 0);
			ll f;
			while ((f = dfs(s, t, big)) > 0)
			{
				flow += f;
			}
		}
	}
};
const ull BS = 1000000007;
bool rolling_hash(string a, string b) {
	int al = a.size(), bl = b.size();
	if (al > bl)
		return false;

	ull t = 1;
	fo(i, al)t *= BS;
	ull ah = 0, bh = 0;
	fo(i, al) ah = ah * BS + a[i];
	fo(i, al) bh = bh * BS + b[i];
	for (ll i = 0; i + al <= bl; i++)
	{
		if (ah == bh)
			return true;
		if (i + al < bl)bh = bh * BS + b[i + al] - b[i] * t;
	}
	return false;
}

vector<ll> es[2010];
mat d;
void dfs(ll s) {

	pllgreaterq q;
	q.push({ 0, s });
	while (!q.empty())
	{
		auto p = toppop(q);
		auto cs = p.first;
		auto cu = p.second;
		for (auto v : es[cu]) {
			if (d[s][v] > cs) {
				d[s][v] = 0;
				q.push({ 0, v });
			}
		}
	}
}
void solve() {

	int n;
	cin >> n;
	ll v[n];
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	ll ans = 0;
	for (int i = 0; i < n - 1; i++) {
		ans = max(ans, v[i] * v[i + 1]);
	}
	cout << ans << nline;
}
int main()
{
	COMinit();
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	Baphu();
	Baphu();
	ll t ;
	cin >> t;
	while (t--) {

		solve();
	}
#ifdef ONLINE_JUDGE
	//cerr << "Time: " << duration . count() / 1000 << endl;
#endif
}
