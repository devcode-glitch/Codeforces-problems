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
 
 
 
ALWAYS THINK IF I CAN SOLVE IT , HOW WOULD IT BE ??
 
SIMPLE OBSERVATIONS
n is the length of the array
m is the total sum of the array
p is the consecutive terms
q is the sum of every p consecutive terms
 
what can i infer from these
3 2 2 1 n m p q
[1 0 1] works , so only the first 2 are detrimental, from then on i can just repeat
4 2 2 1 -> [1 0 1 0]
[3 0 3 0 3]
 
if n divides p, then there exists blocks of size n/p each summing to q
so if q*(n/p)!=m, we cannot do it 
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
void solve(){
    int n,m,p,q;
    cin>>n>>m>>p>>q;
    int check = q*(n/p);
    if(n%p == 0 && q*(n/p)!=m) no;
    else yes;
}
int main(){fio();int t=1;cin>>t;
while(t--) solve();
return 0;}