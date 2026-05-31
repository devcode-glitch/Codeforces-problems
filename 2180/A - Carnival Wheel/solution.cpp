#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int l,a,b;
    cin>>l>>a>>b;
    int ans = a;
    for(int i=0;i<l;i++){
        ans = max(ans,(a+ i* b)%l);
    }
    cout<<ans<<"
";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t = 1;
    cin>>t;
    while(t--){
       solve();
    }
}