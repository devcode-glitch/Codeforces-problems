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
    15 13 12 11
    8  4  3  6
*/
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--){
    //reimu wants to catch
    //remila wants to escape
    int n,reimu,remila,k;
    cin>>n>>reimu>>remila>>k;
    if(n<=3) cout<<1<<endl;
    else{
      int ans = min(abs(remila-reimu),n-abs(remila-reimu)) + k;
      cout<<ans<<endl;
    }
  }
  return 0;
}