#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(n<=m){
        int single = n*a;
        cout<<min(single,b)<<"
";
        return;
    }
    int single = n*a;
    int multi = (n/m*b) + min(n%m*a,b);
    cout<<min(single,multi)<<"
";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test = 1;
    //cin>>test;
    while (test--){
        solve();
    }           
}