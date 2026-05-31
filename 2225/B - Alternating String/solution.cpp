#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
   string s;
   cin>>s;
   int l = s.length();
   if(l<=3){
    cout<<"YES"<<endl;
    return;
   }
   int count = 0;
   for(int i = 0;i+1<=l-1;i++){
    if(s[i] == s[i+1]) ++count;
   }
   cout<<((count<=2)? "YES" : "NO")<<endl;
   return;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}