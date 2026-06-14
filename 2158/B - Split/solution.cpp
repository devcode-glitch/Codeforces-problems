#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
#define endl "
"
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define yes cout<<"Yes
"
#define no cout<<"No
"
#define fio() ios::sync_with_stdio(false);cin.tie(nullptr)
 
#ifndef ONLINE_JUDGE
#define debug(x) do{cerr<<#x<<" = ";_print(x);cerr<<endl;}while(0)
#else
#define debug(x)
#endif
 
void _print(int x){cerr<<x;} void _print(long long x){cerr<<x;} void _print(char x){cerr<<x;} void _print(const string &x){cerr<<x;} void _print(bool x){cerr<<x;} void _print(double x){cerr<<x;}
 
template<class T,class V> void _print(const pair<T,V>& p); template<class T> void _print(const vector<T>& v); template<class T> void _print(const set<T>& v); template<class T> void _print(const multiset<T>& v); template<class T,class V> void _print(const map<T,V>& v);
 
template<class T,class V> void _print(const pair<T,V>& p){cerr<<"{";_print(p.first);cerr<<",";_print(p.second);cerr<<"}";}
template<class T> void _print(const vector<T>& v){cerr<<"[ ";for(const T& x:v){_print(x);cerr<<" ";}cerr<<"]";}
template<class T> void _print(const set<T>& v){cerr<<"[ ";for(const T& x:v){_print(x);cerr<<" ";}cerr<<"]";}
template<class T> void _print(const multiset<T>& v){cerr<<"[ ";for(const T& x:v){_print(x);cerr<<" ";}cerr<<"]";}
template<class T,class V> void _print(const map<T,V>& v){cerr<<"[ ";for(const auto& x:v){_print(x);cerr<<" ";}cerr<<"]";}
//----------------------------------------------------------------------------------------------------------------------------------------------------
/* GOLDEN RULES
SOLUTIONS ARE SIMPLE
PROOFS ARE SIMPLE
IMPLEMENTATION IS SIMPLE
 
 
SIMPLE OBSERVATIONS
  how does the parity of the number affect how much it can contribute
  if its even it contributes twice, if its odd then think 
  what can we do here
  when a number's split is even then it cannot be counted
 
*/
void solve(){
  int n;
  cin>>n;
  vector<int> count(2*n + 1);
  for(int i=0;i<2*n;i++){
    int x;
    cin>>x;
    ++count[x];
  }
  debug((int)count.size());
  int odd = 0,even = 0;
  for(int i = 1;i<count.size();i++){
    if(count[i]>=1){
      count[i]%2 == 0? ++even : ++odd;
    }
  }
  int ans = 2*even + odd;// this is assured
  debug(count);
  debug(even);
  debug(odd);
  debug(ans);
  if(odd == 0){
    (n-even)&1? ans-=2:ans-=0;
  }
  cout<<ans<<endl;
}
int main(){fio();int t=1;cin>>t;
while(t--) {debug(t+1);solve();}
return 0;}