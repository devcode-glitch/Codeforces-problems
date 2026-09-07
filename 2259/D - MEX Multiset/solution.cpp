#include<bits/stdc++.h>
typedef long long ll;
using u64 = unsigned long long; //maximum limit is 2^64 - 1, positive only
using l64 = long double;
using i128 = __int128_t;
using u128 = __uint128_t;
using namespace std;
#define USACO(x) freopen(x ".in", "r", stdin);freopen(x ".out", "w", stdout)
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define decimal(x,n) fixed<<setprecision(n)<<x /* output x precision n   */
#define nl "
"
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define yes cout<<"Yes
"
#define no cout<<"No
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
 GOLDEN RULES
SOLUTIONS ARE SIMPLE
PROOFS ARE SIMPLEa
IMPLEMENTATION IS SIMPLE
 
YOU'RE DOING A CP PROBLEM NOT A HEURISITC, A SOLUTION ALREADY EXISTS
 
ALWAYS THINK IF I CAN SOLVE IT , HOW WOULD IT BE ??
 
SMALL Obvs
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
int tests = 0;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int z = 0;
    for(int i=0;i<n;++i) {cin>>a[i]; z += a[i] == 0;}
    if(z == 1){
        no;
        return;
    }
    yes;
    int zx = 0;
    string ans = "";
    for(int i=0;i<n;++i){
        if(a[i] == 0){
            if(zx == 0) {
                ++zx;
                ans += "a";
            }
            else if(zx == 1){
                ++zx;
                ans += "b";
            }
            else ans += "a";
        }
        else ans += "C";
    }
    cout<<ans<<nl;
    //dbg("X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X_X");
}
int main(){fio;
    #ifdef LOCAL
    auto start_time = chrono::high_resolution_clock::now();
    #endif
    int t=1;cin>>t;
while(t--) {
dbg(++tests);
solve();}
#ifdef LOCAL
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end_time - start_time);
    cerr << "Execution Time: " << duration.count() << " ms
";
#endif
return 0;}