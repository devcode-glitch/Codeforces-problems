#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
#define endl "
"
#define yes cout<<"YES
"
#define no cout<<"NO
"
 
/*
GOLDEN RULES
SOLUTIONS ARE SIMPLE
PROOFS ARE SIMPLE
IMPLEMENTATION IS SIMPLE
 
SIMPLIFY THE PROBLEM
DIVIDE INTO SMALL WHENEVER POSSIBLE
*/
 
/*
  Simple observations  
  we just have to make sure that 2 does not occur after any 1 or 3
  since 4's are single multiples and are already eliminated
*/
 
void solve(){
  string s;
  cin>>s;
  int n = s.length();
  vector<int> prefix(n+1),suffix(n+1);//prefix for counting the number of 1,3's before 2's
                                      //suffix for counting the number of 2's
  int ans = 0;
  for(int i=0;i<n;i++){
    ans+=(s[i] == '4');
    if(i!=0) prefix[i]+=prefix[i-1];
    if(s[i] == '1' || s[i] == '3') ++prefix[i];
  }
  for(int i = n-1;i>=0;i--){
    suffix[i]+=suffix[i+1];
    if(s[i] == '2') ++suffix[i];
  }
  int total = 1e9;
  for(int i=0;i<=n;i++){
    if(i == 0) total = min(total,suffix[i]);
    else total = min(total,prefix[i-1]+suffix[i]);
  }
  ans+=total;
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