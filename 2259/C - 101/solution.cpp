#include<bits/stdc++.h>
#define USACO(x) freopen(x ".in", "r", stdin);freopen(x ".out", "w", stdout)
using namespace std;
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
typedef long long ll;
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
 
u only can ever touch -1
and make it 0 or 1
 
for each 1 try to look for the farthest -1 from it
?
ok start at the first 1
if u encounter any -1 in the mid, change to 0
if its the last then keep as 1
if not a pre mature 1 comes break, and then start from there
 
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
int tests = 0;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;++i) cin>>a[i];
    int left = 0;
    while(left < n && a[left] == 0) ++left;
    vector<int> idxs;
    for(int i=left+1;i<n;++i){
        if(a[i] == -1) idxs.push_back(i);
    }
    set<int> ones;
    for(int i=0;i<n;++i) if(a[i] == 1) ones.insert(i);
    reverse(all(idxs));
    vector<int> x(all(idxs));
    a[left] = a[left] == -1? 1 : a[left];
    if(a[left] == 1) ones.insert(left);
    for(int i = left;i<n;++i){
        if(a[i] == 1 && !ones.empty()) ones.erase(--ones.end());
        if(i-1 >= 0 && i + 1 < n){
                if(a[i] == -1){
                    dbg(idxs);
                    if(idxs.size() > 1) {idxs.pop_back();a[i] = 0;}
                    else if(idxs.size() == 1){
                        if(!ones.empty()) a[i] = 0;
                        else {a[i] = 1;ones.insert(i);} 
                    }
                } 
        }
    }
    a[n-1] = a[n-1] == -1? 1 : a[n-1];
    dbg(a);
    for(auto itr : a) cout<<itr<<" ";
    cout<<nl;
    //dbg("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
}
int main(){fio;int t=1;cin>>t;
 
while(t--) {
dbg(++tests);
solve();}
return 0;}