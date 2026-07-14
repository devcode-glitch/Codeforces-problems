#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
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
YOU'RE DOING A CP PROBLEM NOT A HEURISITC, A SOLUTION ALREADY EXISTS
ALWAYS THINK IF I CAN SOLVE IT , HOW WOULD IT BE ??
SIMPLE OBSERVATIONS
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// C. Traffic Light
// https://codeforces.com/problemset/problem/1744/C
*/
void solve(){
	int n;char c;string s;
	cin>>n>>c>>s;
	dbg(n,c,s);
	s+=s;
	if(c == 'g'){
		cout<<0<<nl;
		return;
	}
	int l = (int)s.size();
	int dist = 0;
	for(int i=0;i<l;++i){
		if(s[i] == c){
			int cur = 0;
			while(i<l && s[i]!= 'g'){
				++cur;
				++i;
				dbg(cur,s[i]);
			}
			dist = max(cur,dist);
			--i;
		}
	}
	cout<<dist<<nl;
	
}
int main(){
#ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif
    fio;int t=1;cin>>t;
while(t--) {dbg(" #########################################################  ");solve();}
return 0;}