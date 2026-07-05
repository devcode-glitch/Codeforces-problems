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
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define yes cout<<"Yes
"
#define no cout<<"No
"
#define fio() ios::sync_with_stdio(false),cin.tie(nullptr)
 
#ifndef ONLINE_JUDGE
#define debug(x) do{cerr<<#x<<" = ";_print(x);cerr<<endl;}while(0)
#else
#define debug(x)
#endif
 
void _print(long double x){cerr<<x;}void _print(int x){cerr<<x;} void _print(long long x){cerr<<x;} void _print(char x){cerr<<x;} void _print(const string &x){cerr<<x;} void _print(bool x){cerr<<(x? "true" : "false");} void _print(double x){cerr<<x;}
 
template<class T,class V> void _print(const pair<T,V>& p); template<class T> void _print(const vector<T>& v); template<class T> void _print(const set<T>& v); template<class T> void _print(const multiset<T>& v); template<class T,class V> void _print(const map<T,V>& v);
 
template<class K, class V>void _print(const multimap<K, V>& mp) {cerr << "{";bool first = true;for (const auto& p : mp) {if (!first) cerr << ", ";_print(p);first = false;}cerr << "}";}
template<class T,class V> void _print(const pair<T,V>& p){cerr<<"{";_print(p.first);cerr<<",";_print(p.second);cerr<<"}";}
template<class T> void _print(const vector<T>& v){cerr<<"[ ";for(const T& x:v){_print(x);cerr<<" ";}cerr<<"]";}
template<class T> void _print(const set<T>& v){cerr<<"[ ";for(const T& x:v){_print(x);cerr<<" ";}cerr<<"]";}
template<class T> void _print(const multiset<T>& v){cerr<<"[ ";for(const T& x:v){_print(x);cerr<<" ";}cerr<<"]";}
template<class K,class V> void _print(const map<K,V>& v){cerr<<"[ ";for(const auto& x:v){_print(x);cerr<<" ";}cerr<<"]";}
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
    cin>>n;
    vector<pair<i64,i64>> v(n);
    for(int i=0;i<n;i++){
        i64 x;
        cin>>x;
        v[i] = {x,i};
    }
    sort(all(v));
    vector<i64> pref(n);
    pref[0] = v[0].first;
    for(int i=1;i<n;i++){
        pref[i] = v[i].first + pref[i-1];
    }
    debug(pref);
    vector<i64> ans(n);
    for(int i = 0;i<n;++i){
        int j = i,found = i;
        while(j<n){
            pair<i64,i64> pi = {pref[j] + 1,LLONG_MIN};
            int idx = lower_bound(v.begin(),v.end(),pi) - v.begin();
            --idx;
            if(idx == j) break;
            found += idx - j;
            j = idx;
        }
        ans[v[i].second] = found;
    }
    for(int i=0;i<n;++i) cout<<ans[i]<<" ";
    cout<<nl;return;
}
int main(){fio();int t=1;cin>>t;
while(t--) {debug(" ########################################  ");solve();}
return 0;}