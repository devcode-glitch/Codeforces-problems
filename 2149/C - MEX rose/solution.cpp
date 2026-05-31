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
    
*/
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--){
    int n,k,ans=0;
    cin>>n>>k;
    map<int,int> m;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      ++m[x];
    }
    for(int i=0;i<k;i++){
      if(m[i] == 0 && m[k]){
        ++ans;
        --m[k];
      }
      else if(m[i] == 0 && m[k] == 0) ++ans;
    }
    while(m[k]--) ++ans;
    cout<<ans<<endl; 
  }
  return 0;
}