#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
   int n;
   cin>>n;
   vector<int> a(n);
   int mc =0,zc = 0;
   for(int i=0;i<n;i++){
    cin>>a[i];
    zc+=(a[i] == 0);
    mc+=(a[i] == -1);
   }
   //each -1 takes 2 points, if the -1 is odd, then it happens once
   int ans = zc*1;
   if(mc%2 == 0){
    cout<<ans<<endl;
   }
   else{
    cout<<ans+2<<endl;
   }
   return;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}