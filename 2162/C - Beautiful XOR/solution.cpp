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
PROBLEMS ARE SIMPLE
PROOFS ARE SIMPLE
IMPLEMENTATION IS SIMPLE
 
SIMPLIFY THE PROBLEM
DIVIDE INTO SMALL WHENEVER POSSIBLE
*/
/*
  Small obvs 
  binary rep of 9 = 1001
  binary rep of 6 = 0110
 
 
  9^7 == 1001
      == 1111
  // this is also a possible way ?
*/
void solve(){
    int a,b;
    cin>>a>>b;
    vector<int> ans;
    for(int i=0;i<32;i++){
      int x = (a>>i)&1;//representing the i-th bit in a
      int y = (b>>i)&1;//representing the i-th bit in b
      if(x!=y){
        if((1<<i)>a) {cout<<-1<<endl;return;}
        else ans.push_back(1<<i);
      }
    }
    cout<<ans.size()<<endl;
    int k = ans.size();
    if(k){
      for(auto itr : ans) cout<<itr<<" ";
      cout<<endl;
    }
  }
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
  return 0;
}