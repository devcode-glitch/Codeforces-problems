#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
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
  Simple observations  
*/
void flip(string &s,int i){
  if(s[i] == '1') s[i] = '0';
  else s[i] = '1';
}
void solve(){
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  int i = 0;
  for(int i=0;i<n-k;i++){
    if(s[i] == '1'){
      flip(s,i);
      flip(s,i+k);
    }
  }
  for(char c : s) if(c == '1') {no;return;}
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