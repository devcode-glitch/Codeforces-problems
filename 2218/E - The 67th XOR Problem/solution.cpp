#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
   int n;
   cin>>n;
   vector<int> arr(n);
   for(int i = 0;i<n;i++) cin>>arr[i];
   int m = 0;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i == j) continue;
        else{
            int ans = arr[i]^arr[j];
            m = max(m,ans);
        }
    }
   }
   cout<<m<<endl;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}
  