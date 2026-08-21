#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using u64 = unsigned long long; //maximum limit is 2^64 - 1, positive only
using l64 = long double;
using i128 = __int128_t;
using u128 = __uint128_t;
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
// G2. Subsequence Addition (Hard Version)
// https://codeforces.com/problemset/problem/1807/G2
 
 
             #PROOF OR IDEA GOES HERE !!
 
             check the prefix sum of the maximum possible obtainable thing
             against, a if 
              <=  then it can
              else its not
              1 1
              1 1 2 
              1 1 2 5
 
              maybe there might be some element in a 
              that's never reachable by any sum of sub-sequence in 
              our prefix array
 
              can it still be lesser than our pref[i]th term 
              while never being able to be reachable by any of the terms
 
*/
void solve(){
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;++i) cin>>a[i];
    sort(all(a));
    if(a[0]!=1){
        no;
        return;
    }
    ll sum = a[0];
    for(int i=1;i<n;++i){
        if(a[i] > sum){
            no;
            return;
        }
        sum += a[i];
    }
    yes;
}
int main(){
#ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif
    fio;int t=1;cin>>t;
    int tests = 0;
while(t--) {dbg(++tests);
solve();}
return 0;}