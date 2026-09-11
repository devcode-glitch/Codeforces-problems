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
the most frequent element is the one u need
u go like
copy first array
replace all unwanted with the most frequent
copy this new array
then replace the remaining unwanted
1 2 3 4
1 2 3 4      1-copy
1 1 2 2      2-swaps
1 1 2 2      1 - xopy
the most frequent thing doubles in each ops
copy -> double ->cop
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
int tests = 0;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;++i) cin >> a[i];
    if(n == 1){
        cout<<0<<nl;
        return;
    }
    unordered_map<int,int> cnt;
    for(int i=0;i<n;++i) ++cnt[a[i]];
    if((int)cnt.size() == 1){
        cout << 0 << nl;
        return;
    }
    pair<int,int> max1 = {-1,-1};
    for(auto itr : cnt){
        if(itr.second > max1.second){
            max1.first = itr.first;
            max1.second = itr.second;
        }
    }
    int pc = max1.second;
    int ops = 0;
    while(true){
        ++ops;
        ops += min(pc,n-pc);
        pc*=2;
        if(pc >= n) break;
    }
    cout<<ops<<nl;
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