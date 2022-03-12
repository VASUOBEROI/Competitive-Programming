#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define ll long long
#define lld long double
#define MOD 1000000007
#define endl '\n'
#define inf LLONG_MAX
#define pi 3.14159265358979323846  //  cout << fixed << setprecision(10) << pi << endl;
#define ninf LLONG_MIN
#define digits(N) floor(log10(N)) + 1
#define root(n)  sqrt(n)
#define rootf(n) sqrtf(n)
#define rootl(n) sqrtl(n)
#define binary_string_to_int_decimal(s) stoll(s,0,2)
#define string_to_int(s)  stoll(s)
#define Occ(s,ch) count(s.begin(),s.end(),ch)
#define HashMap(x,y) unordered_map<x,y>
#define int_to_string(x) to_string(x)
#define setbits(x) __builtin_popcountll(x)//x>=0
#define ctzll(x)   __builtin_ctzll(x)//x>0,x=0:64
#define clz32(x)   __builtin_clz(x)//x>0,x=0:32
#define clz64(x)   __builtin_clzll(x)//x>0,x=0:64
typedef pair<int, int> node;
typedef pair<ll, ll> nodel;
const int MAX = INT_MAX;
const int MIN = INT_MIN;
const unsigned int ultra_max = UINT_MAX; // 0xffffffff
const unsigned long long ultra_inf = ULLONG_MAX; // 0xffffffffffffffff

template<typename T> using PQ = priority_queue<T>;
template<typename T> using PQM = priority_queue<T, vector<T>, greater<T>>;
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag,
                        tree_order_statistics_node_update>;
void dbg_out() {cout << "\n";}
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... args) {cout << H << " "; dbg_out(args...);}
#ifdef Vo_DEBUG
#define dbg(...) cout<<"( "<<#__VA_ARGS__<<" ) : ",dbg_out(__VA_ARGS__)
#else
#define dbg(...) 100
#endif




void solve()
{





































}

void file_io_with_fast_io()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
}

signed main()
{
  file_io_with_fast_io();

  int t = 1;
  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}