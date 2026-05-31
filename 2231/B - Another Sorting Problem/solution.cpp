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
    vector<int> arr(n);
    int k = -1;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i = 0;i<n-1;i++){
      if(arr[i] > arr[i+1]){
        k = max(k,arr[i]-arr[i+1]);
      }
    }
    if(k == -1){
      yes;
    }
    else{
      int current = arr[0];
      bool flag = true;
      for(int i=1;i<n;i++){
        if(arr[i]>=current){
          current = arr[i];
        }
        else if(arr[i]+k >= current){
          current = arr[i]+k;
        }
        else{
          no;
          flag = false;
          break;
        }
      }
      if(flag) yes;
    }
  }
  return 0;
}