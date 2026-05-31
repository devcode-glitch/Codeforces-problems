#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
#define yes cout<<"YES
"
#define no cout<<"NO
"
void solve(){
    ll n;
    cin>>n;
    ll ans = 0;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=n-1;i>0;i--){
        if(arr[i]>-1) arr[i-1]+=(arr[i]);
    } 
    for(auto itr : arr){
        if(itr>0) ++ans;
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