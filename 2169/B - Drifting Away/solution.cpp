#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
  string s;
  int l = 0,r = 0;
  cin>>s;
  for(int i=0;i<s.length()-1;i++){
    if(s[i]!='<' && s[i+1]!='>'){
      cout<<-1<<endl;return;
    }
    else{
      l+=(s[i] == '<');
      r+=(s[i] == '>');
    }
  }
  l+=(s[s.length() - 1] == '<');
  r+=(s[s.length() - 1] == '>');
  int ans = min(l,r);    
  cout<<s.length()-ans<<endl;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}                    