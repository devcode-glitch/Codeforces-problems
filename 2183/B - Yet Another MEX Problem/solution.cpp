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
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    map<int,int> m;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      ++m[arr[i]];
    }
    int mex = 0;
    while(m[mex]>0){
      ++mex;
    }
    cout<<min(mex,k-1)<<endl;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
  return 0;
}