#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define yes cout<<"YES
"
#define no cout<<"NO
"
#define endl "
"
void solve(){
  int n;
  cin>>n;
  int zc=0,oc=0;
  for(int i=0;i<n;i++){
    int x;cin>>x;
    zc+=(x == 0);oc+=(x == 1);
  }
  if(zc == 0) no;
  else if(zc == 1) yes;
  else{
    oc >= 1? yes:no;
  }
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}                    