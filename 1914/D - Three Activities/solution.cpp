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
YOU'RE DOING A CP PROBLEM NOT A HEURISITC, A SOLUTION ALREADY EXISTS
ALWAYS THINK IF I CAN SOLVE IT , HOW WOULD IT BE ??
SIMPLE OBSERVATIONS
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// D. Three Activities
// https://codeforces.com/problemset/problem/1914/D
*/
vector<int> helper(int n,vector<int> &a){
    vector<int> ans(3);
    vector<pair<int,int>> v;
    for(int i=0;i<n;++i){
        v.push_back({a[i],i});
    }
    sort(rall(v));
    for(int i=0;i<3;++i) ans[i] = v[i].second;
    return ans;
}
int getAns(int n,vector<int> &a,vector<int> &b,vector<int> &c){
    vector<int> d = helper(n,a),e = helper(n,b),f = helper(n,c);
    int max_ans = imn;
    for(int i=0;i<3;++i){
        for(int j = 0;j<3;++j){
            for(int k =0;k<3;++k){
                if(d[i] == e[j] || e[j] == f[k] || f[k] == d[i]) continue;
                else{
                    int ans = a[d[i]] + b[e[j]] + c[f[k]];
                    max_ans = max(ans,max_ans);
                }
            }
        }
    }
    return max_ans;
 
}
void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n),c(n);
    for(int i=0;i<n;++i) cin>>a[i];
    for(int i=0;i<n;++i) cin>>b[i];
    for(int i=0;i<n;++i) cin>>c[i];
    int lol = getAns(n,a,b,c);
    cout<<lol<<nl;
}
int main(){
#ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif
int tests = 0;
    fio;int t=1;cin>>t;
while(t--) {dbg(++tests);solve();}
return 0;}