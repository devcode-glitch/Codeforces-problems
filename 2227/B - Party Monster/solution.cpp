#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
  int n;string s;
  cin>>n>>s;
  int lc = 0,rc=0;
  for(char c : s){
    lc+=(c == '(');
    rc+=(c == ')');
  }
  if(lc == rc) cout<<"YES
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