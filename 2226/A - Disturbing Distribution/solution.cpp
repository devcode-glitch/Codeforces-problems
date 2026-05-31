#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  int c = 0;
  for(int i=0;i<n;i++) if(arr[i]!=1) c+=arr[i];
  c+=(arr[n-1] == 1);
  cout<<c<<endl;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}                    