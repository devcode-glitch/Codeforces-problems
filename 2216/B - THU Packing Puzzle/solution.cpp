#include <bits/stdc++.h>
#define endl "
"
using namespace std;
using ll = long long;
void solve() {
    ll t,h,u;
    cin>>t>>h>>u;
    ll ans = 0;
    ans+=(3*u)+min(t,u);
    t-=min(u,t);
    ans+=(3*h)+2*min(2*h,t);
    t-=min(2*h,t);
    if(t)
    ans+=(2*t)+1;
    cout<<ans<<endl;
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