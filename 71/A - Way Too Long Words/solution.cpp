#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
   string s;
   cin>>s;
   if(s.length()<=10) {cout<<s<<endl;return;}
   else{
    int n = s.length();
    cout<<s[0]<<s.size()-2<<s[n-1]<<endl;
   }
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}