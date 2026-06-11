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
  we are given a number n
  we have to find a and b a+b == n such that lcm(a,b) is minimised
  n<= 1e9
 
  when is lcm minimised ?
 
*/
 
void solve(){
  i64 n;
  cin>>n;
  for(int i=2;i*i<=n;i++){
    if(n%i == 0){
        cout<<n/i<<" "<<n-(n/i)<<endl;
        return;
    }
  }
  cout<<1<<" "<<n-1<<endl;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
  return 0;
}