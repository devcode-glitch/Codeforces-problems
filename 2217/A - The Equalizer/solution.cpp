#include <bits/stdc++.h>
#define endl "
"
using namespace std;
using ll = long long;
void solve() {
    int n,k;
    cin>>n>>k;
    int s = 0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        s+=x;
    }
    if(s%2) cout<<"YES"<<endl;
    else if((n*k)%2 == 0) {cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
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