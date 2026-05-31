#include <bits/stdc++.h>
#define endl "
"
using namespace std;
using ll = long long;
void solve(){
    int n;
    int i = 1;
    cin>>n;
    int k = 3*n;
    int k2 = k;
    while(i<=k2/3){
        cout<<i<<" "<<k-1<<" "<<k<<" ";
        k-=2;
        ++i;
    }
    cout<<endl;
    return;
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