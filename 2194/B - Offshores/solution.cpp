#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
   ll n,x,y;
   cin>>n>>x>>y;
   vector<ll> arr(n);
   ll transactions = 0;
   for(ll i =0;i<n;i++){
    cin>>arr[i];
    transactions+=(arr[i]/x);
   }
   ll ans = 0;
   for(int i=0;i<n;i++){
    ll t = (transactions - (arr[i])/x)*y + arr[i];
    ans = max(ans,t);
   }
   cout<<ans<<endl;
   return;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}
  