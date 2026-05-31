#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
  int a,b;
  cin>>a>>b;
  if(a%2 == 0 || b%2 == 0) cout<<"YES
";
  else cout<<"NO
";
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}                    