#include<bits/stdc++.h>
using namespace std;
#define fio() ios::sync_with_stdio(false);cin.tie(nullptr)
using i64 = long long;
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
*
/*
  Simple observations 
  h is random
  we just have to choose the current height,chosen, if the height at the ith index is lesser,
  then our current height is reduced
*/
int main(){
  fio();
  int t = 1;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    i64 s = (i64)1e18,ans = 0;
    for(int i=0;i<n;i++){
        ans+=arr[i];
        s = min(s,ans/(i+1));
        cout<<s<<" ";
    }
    cout<<endl;
  }
  return 0;
}