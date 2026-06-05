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
 
void solve(){
  int n;string s;
  cin>>n>>s;
  map<char,int> ans = {{'A',0},{'n',0},{'a',0},{'d',0},{'r',0},{'y',0}};
  for(char c : s){
    if(c == 'A' || c == 'n' || c == 'a' || c == 'd' || c == 'r' || c == 'y'){
        ++ans[c];
    }
  }
  int ops = 0;
  while(ans['A'] >= 1 && ans['n'] >= 1 && ans['a']>=2 && ans['d']>=1 && ans['r']>=1 && ans['y']>=2){
    ++ops;
    --ans['A'];
    --ans['n'];
    --ans['d'];
    --ans['r'];
    ans['a']-=2;
    ans['y']-=2;
  }
  cout<<ops<<endl;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  //cin>>t;
  while(t--) solve();
  return 0;
}