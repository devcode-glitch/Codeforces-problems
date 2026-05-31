#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,c,k;
    cin>>n>>c>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i]<=c){
            ll diff = c-v[i];
            // you can at most add k flip flops
            diff = min(k,diff);
            v[i]+=diff;
            c+=v[i];
            k-=diff;
        }
    }
    cout<<c<<"
";
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t = 1;
    cin>>t;
    while(t--){
       solve();
    }
}  