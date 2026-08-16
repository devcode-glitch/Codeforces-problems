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
 
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// C2. Marenol (hard version)
// https://codeforces.com/problemset/problem/2254/C2
 
 
             #PROOF OR IDEA GOES HERE !!
 
*/
void solve(){
    int odds1 = 0,evens1 = 0,odds2 = 0,evens2 = 0;
    int n;
    string a ,b;
    cin>>n>>a>>b;
    for(int i=0;i<n;++i){
        if(a[i] == '1'){
            if((i+1)&1) ++odds1;
            else ++evens1;
        }
        if(b[i] == '1'){
            if((i+1)&1) ++odds2;
            else ++evens2;
        }
    }
    if(odds1 != odds2 || evens1 != evens2){
        cout<<-1<<nl;
        return;
    }
    vector<int> oddsa,evensa,oddsb,evensb;
    for(int i=0;i<n;++i){
        if(a[i] == '1'){
            if((i+1)&1) oddsa.push_back(i+1);
            else evensa.push_back(i+1);
        }
        if(b[i] == '1'){
            if((i+1)&1) oddsb.push_back(i+1);
            else evensb.push_back(i+1);
        }
    }
    //since both the strings have same no of odds and even ones;
    
    dbg(odds1,evens1,odds2,evens2);
    sort(rall(oddsa));
    sort(rall(oddsb));
    sort(rall(evensa));
    sort(rall(evensb));
    ll ans = 0;
    dbg(oddsa,evensa,oddsb,evensb);
    while(true){
        if(evensa.empty()){
            break;
        }
        else{
            int term = abs(evensa.back() - evensb.back());
            term /= 2;
            ans += term;
            evensa.pop_back();
            evensb.pop_back();
        }
        
    }
    while(true){
        if(oddsa.empty()){
            break;
        }
        else{
            int term = abs(oddsa.back() - oddsb.back());
            term /= 2;
            ans += term;
            oddsa.pop_back();
            oddsb.pop_back();
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
    fio;int t=1;cin>>t;
    int tests = 0;
while(t--) {dbg(++tests);solve();}
return 0;}