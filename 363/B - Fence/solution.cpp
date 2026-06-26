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
    int height = 1e9;
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(auto &i : arr) cin>>i;
    vector<int> pref(n+1);
    pref[0] = arr[0];
    int idx = -1;
    for(int i =0;i<n;i++){
        pref[i+1] = pref[i]+arr[i];
    }
    debug(pref);
    int ans = 1e9;
    for(int i=0,j = k;j<=n;i++,j++){
        int check = pref[j] - pref[i];
        if(check < ans){
            ans = check;
            idx = i;
        }
    }
    cout<<idx+1<<nl;
}
int main(){fio();int t=1;//cin>>t;
while(t--) solve();
return 0;}