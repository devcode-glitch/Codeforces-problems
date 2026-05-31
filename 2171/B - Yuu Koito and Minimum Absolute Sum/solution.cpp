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
  Simple observations  
  we have to sum the difference of adjacent terms of the array a,
  can we use the formula sum of n terms here ?
  b1 = a2 - a1
  b2 = a3 - a2
  b1 + b2 = a2 - a1 + a3 - a2
   ===> b1 + b2 = a3 - a1
   therefore by induction for n - 1 terms
   sum(bn-1) terms = (an - a1) 
   so now I just have to minimise the value of this sum
   how can i do it
 
*/
 
void solve(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  if(arr[0] == -1){
    if(arr[n-1] == -1){
      arr[n-1] = arr[0] = 0;
    }
    else{
      arr[0] = arr[n-1];
    }
  }
  else if(arr[n-1] == -1){
    if(arr[0] == -1){
      arr[n-1] = arr[0] = 0;
    }
    else{
      arr[n-1] = arr[0];
    }
  }
  int ans = abs(arr[n-1]-arr[0]);
  cout<<ans<<endl;
  for(int i : arr){
    if(i!=-1) cout<<i<<' ';
    else cout<<0<<" ";
  }
  cout<<endl;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
  return 0;
}