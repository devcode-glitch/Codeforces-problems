#include<bits/stdc++.h>
#define vint vector<int>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
  int n , k;
  cin>>n>>k;
  vint arr(n);
  if(n == 2){
    cout<<"2 1"<<endl;
    return;
  }
  if(k%2){
    for(int i=0;i<n;i++){
      arr[i] = n;
    }
    arr[n-1] = n-1;
  }
  else{
    for(int i=0;i<n;i++){
      arr[i] = n-1;
    }
    arr[n-2]=n;
  }
  for(auto itr : arr){
    cout<<itr<<" ";
  }
  cout<<endl;
  return;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}                    