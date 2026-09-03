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
#define _print_v(v) for(auto itr : v) cout<<itr<<" "
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
// B. Permutations & Primes
// https://codeforces.com/problemset/problem/1844/B
 
 
             #PROOF OR IDEA GOES HERE !!
 
*/
void solve(){
    int n;
    cin>>n;
    int i = 1;
    if(n <= 2){
        if(n == 1) cout<<1<<nl;
        else cout<<"2 1"<<nl;
        return;
    }
    vector<int> ans(n + 1);
    ans[(n + 2 - 1)/2] = 1;
    ans[1] = 2;
    ans[n] = 3;
    int start = 4;
    for(int i = 2;i<n;++i){
        if(i!=(n + 2 - 1)/2) ans[i] = start++;
    }
    dbg(ans);
    ans.erase(ans.begin());
    _print_v(ans);
    return;
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