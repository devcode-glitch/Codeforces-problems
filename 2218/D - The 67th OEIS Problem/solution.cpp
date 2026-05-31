#include <bits/stdc++.h>
#define endl "
"
using namespace std;
using ll = long long;
void solve() {
    int n;
    cin>>n;
    int k = 1;
    for(int i=1;i<n+1;i++){
        cout<<k*(k+2)<<" ";
        k+=2;
    }
    cout<<endl;     
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