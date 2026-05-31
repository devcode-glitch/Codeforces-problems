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
  int ans = 0;
  for(int i=1;i<n;i++){
    if(arr[i] == arr[i-1] || arr[i]+arr[i-1] == 7) {++ans;++i;} 
  }
  cout<<ans<<endl;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}                    