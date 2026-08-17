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
 
 
 
               https://codeforces.com/contest/2257/problem/A
               A. Creating Abbreviations
               2026-08-17
               20:18:18
               each and everything must occur as a first letter, no matter it be an abbreviation
               if it were an abbreviation , given as an input, maybe I separate it
               have another list of words
               necessary and sufficient
               each and every character in the abbreviation , must be in the first pos of any of the words
               if not , then its not possible
               else its possible
*/ 
bool Upper(string& str) {
    if (str.empty()) return false;
    return all_of(all(str), [](char c) {
        return isupper(c);
    });
}
void solve(){
    int n,m;
    cin>>n>>m;
    vector<string> abbs,ord;
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        ord.push_back(s);
    }
    for(int i=0;i<m;++i){
        string s;
        cin>>s;
        abbs.push_back(s);
    }
    vector<char> firsts;
    for(string s1 : ord){
        firsts.push_back(toupper(s1[0]));
    }
    sort(all(firsts));
    dbg(firsts);
    for(string s : abbs){
        for(char c  : s){
            if(!binary_search(all(firsts),c)){
                no;
                return;
            }
        }
    }
    yes;
    return;
}
int main(){
int tests = 0;
    fio;int t=1;cin>>t;
while(t--) {dbg(++tests);solve();}
return 0;}