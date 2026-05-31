#include<bits/stdc++.h>
#define endl '
'
using namespace std;
using ll = long long;
 /* PROBLEM IS SIMPLE, JUST OBSERVE CAREFULLY
    YOU CAN DO THIS MATE!, THINK LIKE A PROBLEM SOLVER*/
void solve(){
  int n,k;
  cin>>n>>k;
  vector<int> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  bool ok = true;
  for(int i=0;i<n-1;i++){
    if(arr[i]<=arr[i+1]) continue;
    else{ ok = false;break;}
  }
  if(k>=2){
    cout<<"YES"<<endl;
  }
  else if(ok)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
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