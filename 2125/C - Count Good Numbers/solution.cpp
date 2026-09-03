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
// C. Count Good Numbers
// https://codeforces.com/problemset/problem/2125/C
 
 
             #PROOF OR IDEA GOES HERE !!
 
*/
void solve(){
    ll n,k;
    cin>>k>>n;
    auto ans = [&](ll n) -> ll{
        ll first,second,third,fourth;
        first = n/2;
        second = n/3;
        third = n/5;
        fourth = n/7;
        ll f_s = n/(2*3),s_t = n/(5*3),t_f = n/(5*7),f_f = n/(2*7),x1 = n/(2*5),x2 = n/(3*7);
 
        ll lol1 = n/(2*3*5),lol2 = n/(3*5*7),lol3 = n/(5*7*2),lol4 = n/(7*2*3);
        ll lmao = n/(2*3*5*7);
 
        ll ans = (first + second + third + fourth) -(x1+x2+f_s + s_t + t_f + f_f)
        + (lol1 + lol2 + lol3 + lol4) - lmao;
        return ans;
    };
    auto good = [=](ll n) -> ll{
        if(n <= 0) return 0;
        else return n - ans(n);
    };
    cout<<good(n) - good(k - 1)<<nl;
 
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