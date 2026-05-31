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
    cin>>n;
    int ans = 0;
    vector<int> arr(n+2);
    int pref_max = -1e9;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        pref_max = max(pref_max,arr[i]);
        if(i%2 == 0) arr[i] = pref_max;
    }
    // we want to skip the first 0 and the last n+1 index so we make them largest possible in the constraint
    arr[0] = arr[n+1] = 1e9;
    for(int i=1;i<=n;i+=2){
        ans += max(0,arr[i]-(min(arr[i-1],arr[i+1])-1));
    }
    cout<<ans<<endl;
  }
  return 0;
}