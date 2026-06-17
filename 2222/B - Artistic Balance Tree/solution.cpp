#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long; //maximum limit is 2^64 - 1, positive only
using i128 = __int128_t;
using u128 = __uint128_t;
#define endl "
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
 
void _print(int x){cerr<<x;} void _print(long long x){cerr<<x;} void _print(char x){cerr<<x;} void _print(const string &x){cerr<<x;} void _print(bool x){cerr<<(x? "true" : "false");} void _print(double x){cerr<<x;}
 
template<class T,class V> void _print(const pair<T,V>& p); template<class T> void _print(const vector<T>& v); template<class T> void _print(const set<T>& v); template<class T> void _print(const multiset<T>& v); template<class T,class V> void _print(const map<T,V>& v);
 
template<class T,class V> void _print(const pair<T,V>& p){cerr<<"{";_print(p.first);cerr<<",";_print(p.second);cerr<<"}";}
template<class T> void _print(const vector<T>& v){cerr<<"[ ";for(const T& x:v){_print(x);cerr<<" ";}cerr<<"]";}
template<class T> void _print(const set<T>& v){cerr<<"[ ";for(const T& x:v){_print(x);cerr<<" ";}cerr<<"]";}
template<class T> void _print(const multiset<T>& v){cerr<<"[ ";for(const T& x:v){_print(x);cerr<<" ";}cerr<<"]";}
template<class T,class V> void _print(const map<T,V>& v){cerr<<"[ ";for(const auto& x:v){_print(x);cerr<<" ";}cerr<<"]";}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 GOLDEN RULES
SOLUTIONS ARE SIMPLE
PROOFS ARE SIMPLE
IMPLEMENTATION IS SIMPLE
 
YOU'RE DOING A CP PROBLEM NOT A HEURISITC, A SOLUTION ALREADY EXISTS
 
ALWAYS THINK IF I CAN SOLVE IT , HOW WOULD IT BE ??
 
SIMPLE OBSERVATIONS
can I mark the maximum unmarked element
everytime, 
 
 
 
 
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
void solve(){
    int n,m;
    cin>>n>>m;
    i64 ans = 0,codd=0,ceven=0;
    vector<i64> a(n+1),x(m+1),odd,even;
    for(int i=1;i<=n;i++) {cin>>a[i];
        if(i&1) odd.push_back(a[i]);
        else even.push_back(a[i]);
    }
    for(int i=1;i<=m;i++) {
        int x1;
        cin>>x1;
        if(x1&1) ++codd;
        else ++ceven;
    }
    debug(ceven);
    debug(codd);
    sort(all(even));
    sort(all(odd));
    debug(ans);
    debug(odd);
    debug(even);
    i64 marked = 0,marked2 = 0;
    while(odd.size() && codd--){
        if(odd.back() >= 0 || marked == 0){odd.pop_back();marked = 1;}
        debug(odd);
    }
    while(even.size() && ceven--){
        if(even.back()>=0 || marked2 == 0){even.pop_back();marked2 = 1;}
        debug(even);
    }
    for(auto itr : even) ans+=itr;
    for(auto itr : odd) ans+=itr;
    cout<<ans<<endl;
    debug("--------------------------------------------------------------------------------------------------------------------------------------------------------");
}
int main(){fio();int t=1;cin>>t;
while(t--) solve();
return 0;}