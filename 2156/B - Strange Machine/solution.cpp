#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
  int n,q;
  string s;
  cin>>n>>q>>s;
  int ac = 0;
  vector<int> arr(q);
  for(int i=0;i<q;i++){
    cin>>arr[i];
  }
  for(char c : s) ac+=(c == 'A');
  for(int i = 0 ;i < q;i++){
    if(ac == n) cout<<arr[i]<<endl;
    else{
      int ans = 0;
      while(arr[i]!=0){
        for(char c : s){
          if(arr[i] == 0) break;
          ++ans;
          if(c == 'A')--arr[i];
          else arr[i]/=2;
      }
    }
    cout<<ans<<endl;
  }
}
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}