#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
   ll n;
   cin>>n;
   for(int i = 2;i*i<=n;i++){
    if(n%i == 0){
        cout<<n/i<<" "<<(n - n/i)<<endl;
        return;
    }
   }
   cout<<1<<" "<<n-1<<endl;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}