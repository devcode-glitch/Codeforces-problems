#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
#define yes cout<<"YES
"
#define no cout<<"NO
"
void solve(){
   int n;
   string s;
   cin>>n>>s;
   int dist = 0,ans=0;
   s+=s;
   n*=2;
   bool start = false;
   for(int i=0;i<n;i++){
    if(s[i] == '1') dist = 0;
    else ++dist;
    ans = max(ans,dist);
   }
   cout<<ans<<endl;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
  return 0;
}