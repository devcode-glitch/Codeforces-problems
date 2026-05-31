#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
void solve(){
   string s;
   cin>>s;
   int sum = 0;
   vector<int> delta;
  for(int i=0;i<s.size();i++){
    int curr = (s[i] - '0');
    sum+=curr;
    delta.push_back(curr-(i==0));
  }
  int ans = 0;
  sort(delta.begin(),delta.end());
  while(sum>9){
    sum-=delta.back();
    delta.pop_back();
    ++ans;
  }
  cout<<ans<<endl;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) solve();
}
  