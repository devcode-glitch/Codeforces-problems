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
 GOLDEN RULES
 
SOLUTIONS ARE SIMPLE
 
PROOFS ARE SIMPLE
 
IMPLEMENTATION IS SIMPLE
 
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// A. Desorting
// https://codeforces.com/problemset/problem/1853/A
 
 
             #PROOF OR IDEA GOES HERE !!
 
*/
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n; ++i) cin>>a[i];
    int i1,i2,diff = imx;
    for(int i=0;i + 1<n;++i){
        if(a[i] > a[i+1]){
            cout<<0<<nl;
            return;
        }
        else{
            if(diff >= (a[i +1] - a[i])){
                i1 = i;
                i2 = i + 1;
                diff = (a[i + 1] - a[i]);
            }
        }
    }
    int ans = (diff/2) + 1;
    cout<<ans<<nl;
}
int main(){
#ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif
    fio;int t=1;cin>>t;
    //int tests = 0;
while(t--) {//dbg(++tests);
solve();}
return 0;}