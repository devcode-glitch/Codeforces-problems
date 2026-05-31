#include<bits/stdc++.h>
using namespace std;
#define r return
using ll = long long;
#define endl "
"
void solve(){
   int n;cin>>n;
   int hc = 0;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x == 100){++hc;}
   }
   if(hc==0)
   cout<<"No"<<endl;
   else cout<<"yes
";
   r;
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}