#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  for(int i=0;i+1<n;i++){
    if((arr[i]%2!=0 && arr[i+1]%2!=0) || (arr[i]%2 == 0 && arr[i+1]%2==0)){
        cout<<"NO
";
        return;
    }
  }
  cout<<"YES
";return;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}                    