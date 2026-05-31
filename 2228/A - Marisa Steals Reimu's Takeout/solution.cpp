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
  how does pairing work here
  1) count all the zeroes,
  2) pair 1's and 2's
  3) triplets as the last resor
  1 2 2 1 2 1 0 0
  1 2 1 2 1 2 2 2  
*/
 
void solve(){
   int n;
   cin>>n;
   int c0=0,c1=0,c2=0;
   for(int i = 0;i<n;i++){
    int x;
    cin>>x;
    c0+=(x==0);
    c1+=(x==1);
    c2+=(x==2);
   }
   int ops = 0;
   ops+=c0;
   while(c1&&c2){
    ++ops;
    --c1;
    --c2;
   }
   ops+=(c1/3 + c2/3);
   cout<<ops<<endl;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
  return 0;
}