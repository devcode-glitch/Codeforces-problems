#include<bits/stdc++.h>
using namespace std;
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX;
#define llmn LLONG_MIN
typedef long long ll;
using u64 = unsigned long long; //maximum limit is 2^64 - 1, positive only
using l64 = long double;
using i128 = __int128_t;
using u128 = __uint128_t;
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
PROOFS ARE SIMPLE
IMPLEMENTATION IS SIMPLE
 
YOU'RE DOING A CP PROBLEM NOT A HEURISITC, A SOLUTION ALREADY EXISTS
 
ALWAYS THINK IF I CAN SOLVE IT , HOW WOULD IT BE ??
 
SIMPLE OBSERVATIONS
 
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
void solve(){
    int n,c;
    cin>>n>>c;
    int greater = 0,lesser = 0;
    vector<ll> a(n);
    for(int i=0;i<n;++i) {cin>>a[i];
    lesser += (a[i] <= c);greater += a[i] > c;}
    sort(all(a));
    ll ans = 0;
    if(lesser <= greater){
        for(int i=0;i<n;++i) ans+=(a[i] > c? a[i] - c : 0);
    }
    else{
        for(int i = n/2;i<n;++i) ans+=(a[i] - c);
    }
    cout<<ans<<nl;
}
int main(){fio;int t=1;cin>>t;
while(t--) {dbg("#########################################################");
solve();}
return 0;}