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
// B. Array merging
// https://codeforces.com/problemset/problem/1831/B
*/
void solve(){
	int n;
	cin>>n;
	vector<int> a(n),b(n);
	for(int i=0;i<n;++i) cin>>a[i];
	for(int i=0;i<n;++i) cin>>b[i];
	vector<int> max_a(2*n + 1),max_b(2*n + 1);
	int ctr = 1;
	for(int i=0;i+1<n;++i){
		if(a[i] == a[i+1]){
			++ctr;
			continue;
		}
		else{
			max_a[a[i]] = max(max_a[a[i]],ctr);
			ctr = 1;
		}
	}
	max_a[a[n - 1]] = max(max_a[a[n-1]],ctr);
	ctr = 1;
	for(int i=0;i+1<n;++i){
		if(b[i] == b[i+1]){
			++ctr;
			continue;
		}
		else{
			max_b[b[i]] = max(max_b[b[i]],ctr);
			ctr = 1;
		}
	}
	max_b[b[n - 1]] = max(max_b[b[n-1]],ctr);
	ctr = 1;
	int ans = -1;
	for(int i=1;i<=2*n;++i){
		ans = max(ans,max_a[i] + max_b[i]);
	}
	cout<<ans<<nl;
	return;
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