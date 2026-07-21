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
 
0000 - 000 00 0
101100 10100 0100 000 00 0
111000 11000 1100 110 10
 
when all the characters are the same the answer is obv 1
 1010
 1100
 1001100
 100 or 110
 1010
 110101
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
void solve(){
    int n;
    string s;
    cin>>n>>s;
    int alternating = 0;
    for(int i=1;i<n;++i){
        alternating += (s[i]!=s[i - 1]);
    }
    alternating == 1? cout<<2<<nl : cout<<1<<nl;
}
int main(){fio;int t=1;cin>>t;
while(t--) {dbg("#########################################################");
solve();}
return 0;}