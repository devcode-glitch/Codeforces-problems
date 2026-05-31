#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
#define yes cout<<"YES
"
#define no cout<<"NO
"
 
/*
GOLDEN RULES
SOLUTIONS ARE SIMPLE
PROOFS ARE SIMPLE
IMPLEMENTATION IS SIMPLE
 
SIMPLIFY THE PROBLEM
DIVIDE INTO SMALL WHENEVER POSSIBLE
*/
 
/*
    
*/
 
void solve(){
  int n;
  cin>>n;
  vector<ll> arr(n+1);
  for(int i=1;i<=n;i++) cin>>arr[i];
  for(int i = 1;i<=n;i++){
    ll j = i;
    set<int> s;
    while(j<=n){
      s.insert(j);
      j*=2;
    }
    j = i;
    while(j%2==0){
      j/=2;
      s.insert(j);
    }
    if(s.count(arr[i])) continue;
    else{
      no;return;
    }
  }
  yes;return;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
  return 0;
}