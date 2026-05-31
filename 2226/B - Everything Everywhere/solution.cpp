#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
  ll n;
  cin>>n;
  vector<int> arr(n+1);
  for(int i=1;i<=n;i++) cin>>arr[i];
  int ans = 0;
  for(int i=1;i+1<=n;i++){
    if(gcd(arr[i],arr[i+1]) == max({arr[i],arr[i+1]}) - min({arr[i],arr[i+1]})) ++ans;
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