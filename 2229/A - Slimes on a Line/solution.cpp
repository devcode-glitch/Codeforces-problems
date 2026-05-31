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
    int n;
    int min1 = 1e9,max1 = -1e9;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        min1 = min(x,min1);
        max1 = max(x,max1);
    }
    int ans = (max1-min1+1)/2;
    cout<<ans<<endl;
  }
  return 0;
}