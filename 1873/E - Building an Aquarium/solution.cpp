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
// E. Building an Aquarium
// https://codeforces.com/problemset/problem/1873/E
*/
bool helper(vector<i64> &v,i64 n,i64 mid,i64 x){
	i64 ans = 0;
	for(int i=0;i<n;++i){
		if(v[i]< mid){
			ans+=(mid - v[i]);
		}
	}
	return ans <= x;
}
void solve(){
	i64 n,x;
	cin>>n>>x;
	vector<i64> a(n);
	for(int i=0;i<n;++i) cin>>a[i];
	i64 start = 1,end = 1e12,ans = -1;
	while(start <= end){
		i64 mid = (start + end)/2; 
		if(helper(a,n,mid,x)){
			ans = mid;
			start = mid+1;
		}
		else{
			end = mid - 1;
		}
	}
	cout<<ans<<nl;
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