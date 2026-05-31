#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
   ll x,y;
   cin>>x>>y;
   if(y/x > 2){
    cout<<"YES"<<endl;
    return;
   }
   cout<<"NO"<<endl;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}