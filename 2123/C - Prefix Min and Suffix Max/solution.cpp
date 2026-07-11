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
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define yes cout<<"Yes
"
#define no cout<<"No
"
#define fio() ios::sync_with_stdio(false),cin.tie(nullptr)
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
// C. Prefix Min and Suffix Max
// https://codeforces.com/contest/2123/problem/C
*/
void solve(){
	int n;
	cin>>n;
	vector<int> a(n);
	int mini = INT_MAX,maxi = INT_MIN;
	for(int i=0;i<n;++i) cin>>a[i];
	vector<char> ans(n + 1,'0');
	for(int i=0;i<n;++i){
		if(a[i] <= mini){
			ans[i+1] = '1';
			mini = min(mini,a[i]);
		}
	}
	for(int i=n-1;i>=0;--i){
		if(a[i] >= maxi){
			ans[i+1] = '1';
			maxi = max(a[i],maxi);
		}
	}
	for(int i=1;i<=n;++i) cout<<ans[i];
	cout<<nl;
}
int main(){
#ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif
    fio();int t=1;cin>>t;
while(t--) {dbg(" #########################################################  ");solve();}
return 0;}