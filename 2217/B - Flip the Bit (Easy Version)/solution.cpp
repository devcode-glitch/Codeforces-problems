#include <bits/stdc++.h>
#define endl "
"
using namespace std;
using ll = long long;
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll s;cin>>s;
    ll t = arr[s-1];
    ll t2 = t;
    ll lc = 0,rc = 0;
    for(ll i=0;i<=s-1;i++){
        if(arr[i]!=t){
            ++lc;
            t^=1;
        }
    }
    for(ll i=n-1;i>=s-1;i--){
        if(arr[i]!=t2){
            ++rc;
            t2^=1;
        }
    }     
    cout<<max(lc,rc)<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test = 1;
    cin>>test;
    while (test--){
        solve();
    }           
}