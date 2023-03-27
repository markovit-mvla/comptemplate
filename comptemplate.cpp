#define _USE_MATH_DEFINES /* Allows for usage of language-defined constants like pi */

#include <bits/stdc++.h>

using namespace std;

/* Overloading os for containers - allows for easy printing of pairs and containers */
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& 
operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

/* Shorthand important types */
#define ll  long long
#define ld 	long double
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi 	vector<int>
#define vll vector<ll>
#define mii map<int, int>
#define si 	set<int>
#define sc 	set<char>

/* Constants */
#define MOD   1e9 + 7
#define EPS   1e-9
#define MAX_N 1e5 + 5
const int INF = numeric_limits<int>::max();

template<typename T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

/* Basic functions */
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b)  { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b)  { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void YES() { cout << "YES\n"; }
void NO()  { cout << "NO\n";  }

/* Type Definitions */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

/* Solver function */
void solve() {
	cout << "Hello world!\n";
}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tc = 1;
	// cin >> tc
	auto start = chrono::high_resolution_clock::now();
	for (int t = 1; t <= tc; t++) {
		cout << "Case #" << t << ": ";
		solve();
	}
	auto end = chrono::high_resolution_clock::now();
	cout << std::chrono::duration_cast<std::chrono::duration<double>>(end-start).count() << "\n";
}
