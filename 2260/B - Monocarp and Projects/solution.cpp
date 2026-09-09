#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using u64 = unsigned long long; //maximum limit is 2^64 - 1, positive only
using l64 = long double;
using i128 = __int128_t;
using u128 = __uint128_t;
#define USACO(x) freopen(x ".in", "r", stdin);freopen(x ".out", "w", stdout)
#define decimal(x,n) fixed<<setprecision(n)<<x /* output x precision n   */
#define nl "
"
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define yes cout<<"YES
"
#define no cout<<"NO
"
#define fio ios::sync_with_stdio(false),cin.tie(nullptr)
#ifdef LOCAL
#include "debug.h"
#else
#define dbg(...)
#endif
long long pMOD(long long a, long long b, long long mod = 998244353) {long long res = 1;a %= mod;while (b > 0) {if (b & 1) res = res * a % mod;a = a * a % mod;b >>= 1;}return res;}
long long power(long long a, long long b) {long long res = 1;while (b > 0) {if (b & 1)res = res * a;a = a * a;b >>= 1;}return res;}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
THINGS TO LOOK FOR
.1) MATH INVARIANTS
.2) NECESSARY AND SUFFICIENT THINGS
.3) REDUCE TO A MATHS MODEL
.4) DON'T DO GUESSFORCES
.5) A - 30 B - 50 C - 1.3HRS , DON'T DO FOR AC, SOLVE PROPERLY
GOLDEN RULES
 
SOLUTIONS ARE SIMPLE
 
PROOFS ARE SIMPLE
 
IMPLEMENTATION IS SIMPLE
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// B. Monocarp and Projects
// https://codeforces.com/contest/2260/problem/B
 
             #PROOF OR IDEA GOES HERE !!
the difference is the same across all the months
x - y is the same across 0 - k months , how does that help me
x - y/
*/
void solve(){
    ll x,y,k;
    cin >> x >> y >> k;
    int i=0;
    ll ans = 0;
    while(i < k && (y-x) >= (x + i)){
        ans += (y-x)%(x + i);
        ++i;
    }
    ans += max(0ll,(k-i)*(y - x));
    cout << ans << nl;
}
int main(){
#ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif
    fio;
#ifdef LOCAL
    auto start_time = chrono::high_resolution_clock::now();
#endif
    int t=1;cin>>t;
    //int tests = 0;
 
while(t--) {//dbg(++tests);
solve();}
#ifdef LOCAL
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end_time - start_time);
    cerr << "=========================
";
    cerr << "Execution Time: " << duration.count() << " ms
";
    cerr << "=========================
";
#endif
return 0;}