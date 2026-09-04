#include<bits/stdc++.h>
using namespace std;
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
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
    int n;
    string s;
    cin >> n >> s;
    int c1=0,c0 = 0,l1=0,l0=0;
    l0 += (s[0] == '0' ? 1 : 0);
    int L = 1;
    l1 += (s[0] == '1' ? 1 : 0);
    for(int i=0;i<n;++i){
        c1 += (s[i] == '1');
        c0 += (s[i] == '0');
        if(i > 0 && s[i] != s[i-1]){
            ++L;
            l0 += s[i] == '0';
            l1 += s[i] == '1';
        }
    }
    if(abs(c0 - c1) > 2){
            cout<< -1 << nl;
            return;
    }
    int diff1 = (c1 - c0);
    dbg(l0,l1);
    int diff = (l1 - l0);
    int ans = (n - L) + max(0,abs(diff1 - diff) - 1);
    cout<<ans<<nl;
}
int main(){fio;int t=1;cin>>t;
    int tests = 0;
while(t--) {
    dbg(++tests);
solve();}
return 0;}