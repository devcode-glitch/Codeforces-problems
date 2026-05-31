#include<bits/stdc++.h>
using namespace std;
#define i64 long long
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
  simple obvs
 
  it makes sense to swap when bi<ai, because a smaller element will not affect the max ?
 
  eg test case
  2 3 6 7 
  1 4 5 8
  
 
  after optimal swapping
  1 3 5 7
  2 4 6 8
 
*/
 
void solve(){
  int n;
  cin>>n;
  vector<int> a(n),b(n);
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++) cin>>b[i];
  for(int i=0;i<n;i++){
    if(b[i] < a[i]) swap(b[i],a[i]);
  }
  i64 m = *max_element(a.begin(),a.end());
  for(int i=0;i<n;i++) m+=b[i];
  cout<<m<<endl;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
  return 0;
}