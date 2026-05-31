#include<bits/stdc++.h>
#define endl '
'
using namespace std;
using ll = long long;
 /* PROBLEM IS SIMPLE, JUST OBSERVE CAREFULLY
    YOU CAN DO THIS MATE!, THINK LIKE A PROBLEM SOLVER*/
void solve(){
  int n,alice,left=0,right=0;
  cin>>n>>alice;
  for(int i=0;i<n;i++){
    int x;cin>>x;
    if(x<alice) ++left;
    if(alice<x) ++right;
  }
  cout<<((left>right)? alice - 1 : alice + 1)<<endl;         
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t = 1;
    cin>>t;
    while(t--){
       solve();
    }
}  